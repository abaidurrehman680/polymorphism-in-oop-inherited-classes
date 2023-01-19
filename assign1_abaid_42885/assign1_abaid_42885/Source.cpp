#include<iostream>
using namespace std;
class cricketer {
protected:
	string name;
	int shirtno;
	string dob;
	int odi_rating;
	int test_rating;
	int t20_rating;
	int startyear;
public:
	cricketer(){}
	cricketer(string a,int b,string c,int d,int e,int f,int g){
		name = a;
		shirtno = b;
		dob = c;
		odi_rating = d;
		test_rating = e;
		t20_rating = f;
		startyear = g;

	}
	int calculateAge(){}
	int calculateExperience(){}
	void changeODIRating(){}
	void changeTestRating(){}
	void changeT20Rating(){}
	~cricketer(){}
};
class Bowler :public cricketer {
private:
	string type;
	int total_wickets;
	int match_played;
public:
	Bowler(){}
	Bowler(string a, int b, string c, int d, int e, int f, int g) {
		name = a;
		shirtno = b;
		dob = c;
		odi_rating = d;
		test_rating = e;
		t20_rating = f;
		startyear = g;
	}
	int calculateBowlAverage(){}
	void updateMatches(int a){}
	void updateWickets(int a){}
	~Bowler(){}
};
class Batsman :public cricketer {
private:
	string type;
	int total_runs;
	int match_played;
	int best_score;
public:
	Batsman(){}
	Batsman(string a, int b, string c, int d, int e, int f, int g){
		name = a;
		shirtno = b;
		dob = c;
		odi_rating = d;
		test_rating = e;
		t20_rating = f;
		startyear = g;
	}
	int calculateBateAverage(){}
	void updateRun(){}
	void updatematches(int a){}
	void updateRuns(int a){}
	~Batsman(){}
};
class AllRounder:public Bowler,public Batsman{
public:
	AllRounder(){}
	~AllRounder(){}
};

int main() {

	return 0;
}