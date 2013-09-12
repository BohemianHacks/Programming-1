#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <string.h>
#include <time.h>
#include "stdafx.h"
#include <stdlib.h>
#include <curl/curl.h>

using namespace std;

static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
	    ((string*)userp)->append((char*)contents, size * nmemb);
	        return size * nmemb;
}

bool getPage(const char* url, string& readBuffer){
	CURL *curl;
	CURLcode res;
	curl = curl_easy_init();
	if(curl){ 
		curl_easy_setopt(curl, CURLOPT_URL, url);
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
		res = curl_easy_perform(curl);
		if(res != CURLE_OK){
			fprintf(stderr,"Failed: %s\n",curl_easy_strerror(res));
			return false;
		}
		return true;
	}
	curl_easy_cleanup(curl);
}

double getPrice(string& symbol, string& type){
	stringstream urlBuilder;
	string response;
	urlBuilder << "http://download.finance.yahoo.com/d/quotes.csv?s=" << symbol << "&f=" << type;
	if (getPage(urlBuilder.str().c_str(),response)){
		return atof(response.c_str());
	}
	return 0.0;
}

class stock {
	public:
		double open; //opening price
		double close; //previous closing price
		double current; //current price
		double change; //percent change from previous close
		string symbol; //stock ticker symbol
		stock(string sym);
		void update(void);
		void getEma(int days);
};

stock::stock(string sym){
	symbol = sym;
	string type = "o";
	open = getPrice(symbol,type);
	type = "p";
	close = getPrice(symbol,type);
	type = "l1";
	current = getPrice(symbol,type);
	change = 100.0*(current-close)/current;
	type.clear();
}

void stock::update(void){
	string type = "o";
	open = getPrice(symbol,type);
	type = "p";
	close = getPrice(symbol,type);
	type = "l1";
	current = getPrice(symbol,type); 
	change = 100.0*(current-close)/current;
	type.clear();
}

	

int main(int argc, char *argv[]){
	bool color = false;
	int interval = 30;
	vector<string> stocks;
	ifstream list;
	if (argc<2){
		cout << "Usage: sst [options] <stock list>" << endl;
		return 0;
	}
	else if (argc>=2){
		for (int i=1; i<argc; i++){
			if (strstr(argv[i],"-") != NULL){
				if (strcmp(argv[i],"-c")==0){
					color = true;
					}
			}
			else{
				list.open(argv[i]);
				if (list.is_open()){
					int j = 0;
					string sym;
					while (list >> sym){
						stocks.push_back(sym);
					}
				}
				else{
					cout << "Usage: sst [options] <stock list>" << endl;
					return 0;
				}
			}
		}
		if (!(0 < stocks[0].length() < 6)){
			cout << "Usage: sst [options] <stock list>" << endl;
			return 0;
		}
	}
	vector<stock> stockV;
	string type = "l1";
	for (int i = 0; i < stocks.size(); i++){
		double price = getPrice(stocks[i], type);
		if (price > 0.0){
			stock s(stocks[i]);
			stockV.push_back(s);
		}
		else if (stocks[i].length() < 1)
			break;
	}
	type.clear();
	vector<string> screen;
	stringstream line;
	for (int s = 0;s < stockV.size();s++){
		cout << stockV[s].symbol << ": " << stockV[s].current << " %" << stockV[s].change << endl;
		screen.push_back(line.str());
		}
		cin.ignore();	
	return 0;
}
