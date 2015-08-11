#include "main.h"


int total_scores ( void )
{
	int t1p1made3 = 0, t1p2made3 = 0, t1p3made3 = 0, t1p4made3 = 0, t1p5made3 = 0,
		t2p1made3 = 0, t2p2made3 = 0, t2p3made3 = 0, t2p4made3 = 0, t2p5made3 = 0;
	int t1p1miss3 = 0, t1p2miss3 = 0, t1p3miss3 = 0, t1p4miss3 = 0, t1p5miss3 = 0,
		t2p1miss3 = 0, t2p2miss3 = 0, t2p3miss3 = 0, t2p4miss3 = 0, t2p5miss3 = 0;
	int t1p1made2 = 0, t1p2made2 = 0, t1p3made2 = 0, t1p4made2 = 0, t1p5made2 = 0,
		t2p1made2 = 0, t2p2made2 = 0, t2p3made2 = 0, t2p4made2 = 0, t2p5made2 = 0;
	int t1p1miss2 = 0, t1p2miss2 = 0, t1p3miss2 = 0, t1p4miss2 = 0, t1p5miss2 = 0,
		t2p1miss2 = 0, t2p2miss2 = 0, t2p3miss2 = 0, t2p4miss2 = 0, t2p5miss2 = 0;
	int t1p1made = 0, t1p2made = 0, t1p3made = 0, t1p4made = 0, t1p5made = 0,
		t2p1made = 0, t2p2made = 0, t2p3made = 0, t2p4made = 0, t2p5made = 0;
	int t1p1shots3 = 0, t1p2shots3 = 0, t1p3shots3 = 0, t1p4shots3 = 0, t1p5shots3 = 0,
		t2p1shots3 = 0, t2p2shots3 = 0, t2p3shots3 = 0, t2p4shots3 = 0, t2p5shots3 = 0;
	int t1p1shots2 = 0, t1p2shots2 = 0, t1p3shots2 = 0, t1p4shots2 = 0, t1p5shots2 = 0,
		t2p1shots2 = 0, t2p2shots2 = 0, t2p3shots2 = 0, t2p4shots2 = 0, t2p5shots2 = 0;
	int t1p1shots = 0, t1p2shots = 0, t1p3shots = 0, t1p4shots = 0, t1p5shots = 0,
		t2p1shots = 0, t2p2shots = 0, t2p3shots = 0, t2p4shots = 0, t2p5shots = 0;
	int t1p1points = 0, t1p2points = 0, t1p3points = 0, t1p4points = 0, t1p5points = 0,
		t2p1points = 0, t2p2points = 0, t2p3points = 0, t2p4points = 0, t2p5points = 0;
	int team1made3 = 0, team1miss3 = 0, team1made2 = 0, team1miss2 = 0,
		team2made3 = 0, team2miss3 = 0, team2made2 = 0, team2miss2 = 0;
	int team1score = 0, team2score = 0, team1shots = 0, team2shots = 0, team1made = 0, team2made = 0,
	    team1miss = 0, team2miss = 0, team1shots3 = 0, team1shots2 = 0,
		team2shots3 = 0, team2shots2 = 0;
	string t1p1, t1p2, t1p3, t1p4, t1p5, t2p1, t2p2, t2p3, t2p4, t2p5;
	string fartshit;
	double t1p1fg3, t1p2fg3, t1p3fg3, t1p4fg3, t1p5fg3,
		   t2p1fg3, t2p2fg3, t2p3fg3, t2p4fg3, t2p5fg3;
	double t1p1fg2, t1p2fg2, t1p3fg2, t1p4fg2, t1p5fg2,
		   t2p1fg2, t2p2fg2, t2p3fg2, t2p4fg2, t2p5fg2;
	double t1p1fg, t1p2fg, t1p3fg, t1p4fg, t1p5fg,
		   t2p1fg, t2p2fg, t2p3fg, t2p4fg, t2p5fg;
	double team1fg, team2fg, team1fg3, team1fg2, team2fg3, team2fg2;
	char key = ' ';
	int name_counter = 1;
	ofstream statsfile;

	cout << "James Schulte Sucks";
	system("pause");

	cout << "Enter the name of team 1 player 1: ";
	getline ( cin, t1p1 );
	cout << "Enter the name of team 1 player 2: ";
	getline ( cin, t1p2 );
	cout << "Enter the name of team 1 player 3: ";
	getline ( cin, t1p3 );
	cout << "Enter the name of team 1 player 4: ";
	getline ( cin, t1p4 );
	cout << "Enter the name of team 1 player 5: ";
	getline ( cin, t1p5 );
	cout << "Enter the name of team 2 player 1: ";
	getline ( cin, t2p1 );
	cout << "Enter the name of team 2 player 2: ";
	getline ( cin, t2p2 );
	cout << "Enter the name of team 2 player 3: ";
	getline ( cin, t2p3 );
	cout << "Enter the name of team 2 player 4: ";
	getline ( cin, t2p4 );
	cout << "Enter the name of team 2 player 5: ";
	getline ( cin, t2p5 );

	while (key != '=') {
		cout << "Enter a key: ";
		 key = _getch();
	    cout << "You entered: " << key << endl;
		if ( key == '1' ) {
			t1p1made3++;
		}
		else if ( key == 'q' ) {
			t1p1miss3++;
		}
		else if ( key == 'a' ) {
			t1p1made2++;
		}
		else if ( key == 'z' ) {
			t1p1miss2++;
		}

		else if ( key == '2' ) {
			t1p2made3++;
		}
		else if ( key == 'w' ) {
			t1p2miss3++;
		}
		else if ( key == 's' ) {
			t1p2made2++;
		}
		else if ( key == 'x' ) {
			t1p2miss2++;
		}

		else if ( key == '3' ) {
			t1p3made3++;
		}
		else if ( key == 'e' ) {
			t1p3miss3++;
		}
		else if ( key == 'd' ) {
			t1p3made2++;
		}
		else if ( key == 'c' ) {
			t1p3miss2++;
		}

		else if ( key == '4' ) {
			t1p4made3++;
		}
		else if ( key == 'r' ) {
			t1p4miss3++;
		}
		else if ( key == 'f' ) {
			t1p4made2++;
		}
		else if ( key == 'v' ) {
			t1p4miss2++;
		}

		else if ( key == '5' ) {
			t1p5made3++;
		}
		else if ( key == 't' ) {
			t1p5miss3++;
		}
		else if ( key == 'g' ) {
			t1p5made2++;
		}
		else if ( key == 'b' ) {
			t1p5miss2++;
		}

		else if ( key == '6' ) {
			t2p1made3++;
		}
		else if ( key == 'y' ) {
			t2p1miss3++;
		}
		else if ( key == 'h' ) {
			t2p1made2++;
		}
		else if ( key == 'n' ) {
			t2p1miss2++;
		}

		else if ( key == '7' ) {
			t2p2made3++;
		}
		else if ( key == 'u' ) {
			t2p2miss3++;
		}
		else if ( key == 'j' ) {
			t2p2made2++;
		}
		else if ( key == 'm' ) {
			t2p2miss2++;
		}

		else if ( key == '8' ) {
			t2p3made3++;
		}
		else if ( key == 'i' ) {
			t2p3miss3++;
		}
		else if ( key == 'k' ) {
			t2p3made2++;
		}
		else if ( key == ',' ) {
			t2p3miss2++;
		}

		else if ( key == '9' ) {
			t2p4made3++;
		}
		else if ( key == 'o' ) {
			t2p4miss3++;
		}
		else if ( key == 'l' ) {
			t2p4made2++;
		}
		else if ( key == '.' ) {
			t2p4miss2++;
		}

		else if ( key == '0' ) {
			t2p5made3++;
		}
		else if ( key == 'p' ) {
			t2p5miss3++;
		}
		else if ( key == ';' ) {
			t2p5made2++;
		}
		else if ( key == '/' ) {
			t2p5miss2++;
		}

		else if ( key == '-' ) {
			t1p1miss3++;
		}
	}


	t1p1points = (t1p1made3 * 3 + t1p1made2 * 2);
	t1p2points = (t1p2made3 * 3 + t1p2made2 * 2);
	t1p3points = (t1p3made3 * 3 + t1p3made2 * 2);
	t1p4points = (t1p4made3 * 3 + t1p4made2 * 2);
	t1p5points = (t1p5made3 * 3 + t1p5made2 * 2);

	t2p1points = (t2p1made3 * 3 + t2p1made2 * 2);
	t2p2points = (t2p2made3 * 3 + t2p2made2 * 2);
	t2p3points = (t2p3made3 * 3 + t2p3made2 * 2);
	t2p4points = (t2p4made3 * 3 + t2p4made2 * 2);
	t2p5points = (t2p5made3 * 3 + t2p5made2 * 2);


	t1p1shots3 = (t1p1made3 + t1p1miss3);
	t1p2shots3 = (t1p2made3 + t1p2miss3);
	t1p3shots3 = (t1p3made3 + t1p3miss3);
	t1p4shots3 = (t1p4made3 + t1p4miss3);
	t1p5shots3 = (t1p5made3 + t1p5miss3);

	t2p1shots3 = (t2p1made3 + t2p1miss3);
	t2p2shots3 = (t2p2made3 + t2p2miss3);
	t2p3shots3 = (t2p3made3 + t2p3miss3);
	t2p4shots3 = (t2p4made3 + t2p4miss3);
	t2p5shots3 = (t2p5made3 + t2p5miss3);


	t1p1shots2 = (t1p1made2 + t1p1miss2);
	t1p2shots2 = (t1p2made2 + t1p2miss2);
	t1p3shots2 = (t1p3made2 + t1p3miss2);
	t1p4shots2 = (t1p4made2 + t1p4miss2);
	t1p5shots2 = (t1p5made2 + t1p5miss2);

	t2p1shots2 = (t2p1made2 + t2p1miss2);
	t2p2shots2 = (t2p2made2 + t2p2miss2);
	t2p3shots2 = (t2p3made2 + t2p3miss2);
	t2p4shots2 = (t2p4made2 + t2p4miss2);
	t2p5shots2 = (t2p5made2 + t2p5miss2);



	t1p1shots = (t1p1shots3 + t1p1shots2);
	t1p2shots = (t1p2shots3 + t1p2shots2);
	t1p3shots = (t1p3shots3 + t1p3shots2);
	t1p4shots = (t1p4shots3 + t1p4shots2);
	t1p5shots = (t1p5shots3 + t1p5shots2);

	t2p1shots = (t2p1shots3 + t2p1shots2);
	t2p2shots = (t2p2shots3 + t2p2shots2);
	t2p3shots = (t2p3shots3 + t2p3shots2);
	t2p4shots = (t2p4shots3 + t2p4shots2);
	t2p5shots = (t2p5shots3 + t2p5shots2);

	t1p1made = (t1p1made3 + t1p1made2);
	t1p2made = (t1p2made3 + t1p2made2);
	t1p3made = (t1p3made3 + t1p3made2);
	t1p4made = (t1p4made3 + t1p4made2);
	t1p5made = (t1p5made3 + t1p5made2);

	t2p1made = (t2p1made3 + t2p1made2);
	t2p2made = (t2p2made3 + t2p2made2);
	t2p3made = (t2p3made3 + t2p3made2);
	t2p4made = (t2p4made3 + t2p4made2);
	t2p5made = (t2p5made3 + t2p5made2);

	team1made3 = (t1p1made3 + t1p2made3 + t1p3made3 + t1p4made3 + t1p5made3);
	team2made3 = (t2p1made3 + t2p2made3 + t2p3made3 + t2p4made3 + t2p5made3);

	team1made2 = (t1p1made2 + t1p2made2 + t1p3made2 + t1p4made2 + t1p5made2);
	team2made2 = (t2p1made2 + t2p2made2 + t2p3made2 + t2p4made2 + t2p5made2);

	team1miss3 = (t1p1miss3 + t1p2miss3 + t1p3miss3 + t1p4miss3 + t1p5miss3);
	team2miss3 = (t2p1miss3 + t2p2miss3 + t2p3miss3 + t2p4miss3 + t2p5miss3);

	team1miss2 = (t1p1miss2 + t1p2miss2 + t1p3miss2 + t1p4miss2 + t1p5miss2);
	team2miss2 = (t2p1miss2 + t2p2miss2 + t2p3miss2 + t2p4miss2 + t2p5miss2);

	team1made = (team1made3 + team1made2);
	team2made = (team2made3 + team2made2);

	team1miss = (team1miss3 + team1miss2);
	team2miss = (team2miss3 + team2miss2);

	team1shots = (team1made + team1miss);
	team2shots = (team2made + team2miss);

	team1shots3 = (team1made3 + team1miss3);
	team2shots3 = (team2made3 + team2miss3);
	team1shots2 = (team1made2 + team1miss2);
	team2shots2 = (team2made2 + team2miss2);

	if (team1shots3 == 0){team1fg3 = 0.0;}
	else {team1fg3 = (float)team1made3 / (float)team1shots3;}
	if (team2shots3 == 0){team2fg3 = 0.0;}
	else {team2fg3 = (float)team2made3 / (float)team2shots3;}
	if (team1shots2 == 0){team1fg2 = 0.0;}
	else {team1fg2 = (float)team1made2 / (float)team1shots2;}
	if (team2shots2 == 0){team2fg2 = 0.0;}
	else {team2fg2 = (float)team2made2 / (float)team2shots2;}
	if (team1shots == 0){team1fg = 0.0;}
	else {team1fg = (float)team1made / (float)team1shots;}
	if (team2shots == 0){team2fg = 0.0;}
	else {team2fg = (float)team2made / (float)team2shots;}

	if (t1p1shots3 == 0) {t1p1fg3 = 0.0;}
	else {t1p1fg3 = (float)t1p1made3 / (float)t1p1shots3;}
	if (t1p2shots3 == 0) {t1p2fg3 = 0.0;}
	else {t1p2fg3 = (float)t1p2made3 / (float)t1p2shots3;}
	if (t1p3shots3 == 0) {t1p3fg3 = 0.0;}
	else {t1p3fg3 = (float)t1p3made3 / (float)t1p3shots3;}
	if (t1p4shots3 == 0) {t1p4fg3 = 0.0;}
	else {t1p4fg3 = (float)t1p4made3 / (float)t1p4shots3;}
	if (t1p5shots3 == 0) {t1p5fg3 = 0.0;}
	else {t1p5fg3 = (float)t1p5made3 / (float)t1p5shots3;}

	if (t2p1shots3 == 0) {t2p1fg3 = 0.0;}
	else {t2p1fg3 = (float)t2p1made3 / (float)t2p1shots3;}
	if (t2p2shots3 == 0) {t2p2fg3 = 0.0;}
	else {t2p2fg3 = (float)t2p2made3 / (float)t2p2shots3;}
	if (t2p3shots3 == 0) {t2p3fg3 = 0.0;}
	else {t2p3fg3 = (float)t2p3made3 / (float)t2p3shots3;}
	if (t2p4shots3 == 0) {t2p4fg3 = 0.0;}
	else {t2p4fg3 = (float)t2p4made3 / (float)t2p4shots3;}
	if (t2p5shots3 == 0) {t2p5fg3 = 0.0;}
	else {t2p5fg3 = (float)t2p5made3 / (float)t2p5shots3;}


	if (t1p1shots2 == 0) {t1p1fg2 = 0.0;}
	else {t1p1fg2 = (float)t1p1made2 / (float)t1p1shots2;}
	if (t1p2shots2 == 0) {t1p2fg2 = 0.0;}
	else {t1p2fg2 = (float)t1p2made2 / (float)t1p2shots2;}
	if (t1p3shots2 == 0) {t1p3fg2 = 0.0;}
	else {t1p3fg2 = (float)t1p3made2 / (float)t1p3shots2;}
	if (t1p4shots2 == 0) {t1p4fg2 = 0.0;}
	else {t1p4fg2 = (float)t1p4made2 / (float)t1p4shots2;}
	if (t1p5shots2 == 0) {t1p5fg2 = 0.0;}
	else {t1p5fg2 = (float)t1p5made2 / (float)t1p5shots2;}

	if (t2p1shots2 == 0) {t2p1fg2 = 0.0;}
	else {t2p1fg2 = (float)t2p1made2 / (float)t2p1shots2;}
	if (t2p2shots2 == 0) {t2p2fg2 = 0.0;}
	else {t2p2fg2 = (float)t2p2made2 / (float)t2p2shots2;}
	if (t2p3shots2 == 0) {t2p3fg2 = 0.0;}
	else {t2p3fg2 = (float)t2p3made2 / (float)t2p3shots2;}
	if (t2p4shots2 == 0) {t2p4fg2 = 0.0;}
	else {t2p4fg2 = (float)t2p4made2 / (float)t2p4shots2;}
	if (t2p5shots2 == 0) {t2p5fg2 = 0.0;}
	else {t2p5fg2 = (float)t2p5made2 / (float)t2p5shots2;}


	if (t1p1shots == 0) {t1p1fg = 0.0;}
	else {t1p1fg = (float)t1p1made / (float)t1p1shots;}
	if (t1p2shots == 0) {t1p2fg = 0.0;}
	else {t1p2fg = (float)t1p2made / (float)t1p2shots;}
	if (t1p3shots == 0) {t1p3fg = 0.0;}
	else {t1p3fg = (float)t1p3made / (float)t1p3shots;}
	if (t1p4shots == 0) {t1p4fg = 0.0;}
	else {t1p4fg = (float)t1p4made / (float)t1p4shots;}
	if (t1p5shots == 0) {t1p5fg = 0.0;}
	else {t1p5fg = (float)t1p5made / (float)t1p5shots;}

	if (t2p1shots == 0) {t2p1fg = 0.0;}
	else {t2p1fg = (float)t2p1made / (float)t2p1shots;}
	if (t2p2shots == 0) {t2p2fg = 0.0;}
	else {t2p2fg = (float)t2p2made / (float)t2p2shots;}
	if (t2p3shots == 0) {t2p3fg = 0.0;}
	else {t2p3fg = (float)t2p3made / (float)t2p3shots;}
	if (t2p4shots == 0) {t2p4fg = 0.0;}
	else {t2p4fg = (float)t2p4made / (float)t2p4shots;}
	if (t2p5shots == 0) {t2p5fg = 0.0;}
	else {t2p5fg = (float)t2p5made / (float)t2p5shots;}




	team1score = t1p1points + t1p2points + t1p3points + t1p4points + t1p5points;
	team2score = t2p1points + t2p2points + t2p3points + t2p4points + t2p5points;



	statsfile.open ("stats.txt", ios::out | ios::app );

	statsfile << "Team 1 score: " << team1score << endl;
	statsfile << "Team 2 score: " << team2score << endl;
	statsfile << "Team 1 stats:\n";
	statsfile << "\tTeam 1 3 Point shooting: " << team1made3 << " / " << team1shots3 << " FG%: " << team1fg3 << endl;
	statsfile << "\tTeam 1 2 Point shooting: " << team1made2 << " / " << team1shots2 << " FG%: " << team1fg2 << endl;
	statsfile << "\tTeam 1 Overall Shooting: " << team1made << " / " << team1shots << " FG%: " << team1fg << endl;
	statsfile << "\t" << t1p1 << ":\n";
	statsfile << "\t\tPoints: " << t1p1points << endl;
	statsfile << "\t\t3 Point shooting: " << t1p1made3 << " / " << t1p1shots3 << " FG%: " << fixed << setprecision(6) << t1p1fg3 << endl;
	statsfile << "\t\t2 Point shooting: " << t1p1made2 << " / " << t1p1shots2 << " FG%: " << t1p1fg2 << endl;
	statsfile << "\t\tTotal Shooting: " << t1p1made << " / " << t1p1shots << " FG%: " << t1p1fg << endl;
	statsfile << "\t" << t1p2 << ":\n";
	statsfile << "\t\tPoints: " << t1p3points << endl;
	statsfile << "\t\t3 Point shooting: " << t1p2made3 << " / " << t1p2shots3 << " FG%: " << t1p2fg3 << endl;
	statsfile << "\t\t2 Point shooting: " << t1p2made2 << " / " << t1p2shots2 << " FG%: " << t1p2fg2 << endl;
	statsfile << "\t\tTotal Shooting: " << t1p2made << " / " << t1p2shots << " FG%: " << t1p2fg << endl;
	statsfile << "\t" << t1p3 << ":\n";
	statsfile << "\t\tPoints: " << t1p3points << endl;
	statsfile << "\t\t3 Point shooting: " << t1p3made3 << " / " << t1p3shots3 << " FG%: " << t1p3fg3 << endl;
	statsfile << "\t\t2 Point shooting: " << t1p3made2 << " / " << t1p3shots2 << " FG%: " << t1p3fg2 << endl;
	statsfile << "\t\tTotal Shooting: " << t1p3made << " / " << t1p3shots << " FG%: " << t1p3fg << endl;
	statsfile << "\t" << t1p4 << ":\n";
	statsfile << "\t\tPoints: " << t1p4points << endl;
	statsfile << "\t\t3 Point shooting: " << t1p4made3 << " / " << t1p4shots3 << " FG%: " << t1p4fg3 << endl;
	statsfile << "\t\t2 Point shooting: " << t1p4made2 << " / " << t1p4shots2 << " FG%: " << t1p4fg2 << endl;
	statsfile << "\t\tTotal Shooting: " << t1p4made << " / " << t1p4shots << " FG%: " << t1p4fg << endl;
	statsfile << "\t" << t1p5 << ":\n";
	statsfile << "\t\tPoints: " << t1p5points << endl;
	statsfile << "\t\t3 Point shooting: " << t1p5made3 << " / " << t1p5shots3 << " FG%: " << t1p5fg3 << endl;
	statsfile << "\t\t2 Point shooting: " << t1p5made2 << " / " << t1p5shots2 << " FG%: " << t1p5fg2 << endl;
	statsfile << "\t\tTotal Shooting: " << t1p5made << " / " << t1p5shots << " FG%: " << t1p5fg << endl;

	statsfile << "Team 2 stats:\n";
	statsfile << "\tTeam 2 3 Point shooting: " << team2made3 << " / " << team2shots3 << " FG%: " << team2fg3 << endl;
	statsfile << "\tTeam 2 2 Point shooting: " << team2made2 << " / " << team2shots2 << " FG%: " << team2fg2 << endl;
	statsfile << "\tTeam 2 Overall Shooting: " << team2made << " / " << team2shots << " FG%: " << team2fg << endl;
	statsfile << "\t" << t2p1 << ":\n";
	statsfile << "\t\tPoints: " << t2p1points << endl;
	statsfile << "\t\t3 Point shooting: " << t2p1made3 << " / " << t2p1shots3 << " FG%: " << t2p1fg3 << endl;
	statsfile << "\t\t2 Point shooting: " << t2p1made2 << " / " << t2p1shots2 << " FG%: " << t2p1fg2 << endl;
	statsfile << "\t\tTotal Shooting: " << t2p1made << " / " << t2p1shots << " FG%: " << t2p1fg << endl;
	statsfile << "\t" << t2p2 << ":\n";
	statsfile << "\t\tPoints: " << t2p2points << endl;
	statsfile << "\t\t3 Point shooting: " << t2p2made3 << " / " << t2p2shots3 << " FG%: " << t2p2fg3 << endl;
	statsfile << "\t\t2 Point shooting: " << t2p2made2 << " / " << t2p2shots2 << " FG%: " << t2p2fg2 << endl;
	statsfile << "\t\tTotal Shooting: " << t2p2made << " / " << t2p2shots << " FG%: " << t2p2fg << endl;
	statsfile << "\t" << t2p3 << ":\n";
	statsfile << "\t\tPoints: " << t2p3points << endl;
	statsfile << "\t\t3 Point shooting: " << t2p3made3 << " / " << t2p3shots3 << " FG%: " << t2p3fg3 << endl;
	statsfile << "\t\t2 Point shooting: " << t2p3made2 << " / " << t2p3shots2 << " FG%: " << t2p3fg2 << endl;
	statsfile << "\t\tTotal Shooting: " << t2p3made << " / " << t2p3shots << " FG%: " << t2p3fg << endl;
	statsfile << "\t" << t2p4 << ":\n";
	statsfile << "\t\tPoints: " << t2p4points << endl;
	statsfile << "\t\t3 Point shooting: " << t2p4made3 << " / " << t2p4shots3 << " FG%: " << t2p4fg3 << endl;
	statsfile << "\t\t2 Point shooting: " << t2p4made2 << " / " << t2p4shots2 << " FG%: " << t2p4fg2 << endl;
	statsfile << "\t\tTotal Shooting: " << t2p4made << " / " << t2p4shots << " FG%: " << t2p4fg << endl;
	statsfile << "\t" << t2p5 << ":\n";
	statsfile << "\t\tPoints: " << t2p5points << endl;
	statsfile << "\t\t3 Point shooting: " << t2p5made3 << " / " << t2p5shots3 << " FG%: " << t2p5fg3 << endl;
	statsfile << "\t\t2 Point shooting: " << t2p5made2 << " / " << t2p5shots2 << " FG%: " << t2p5fg2 << endl;
	statsfile << "\t\tTotal Shooting: " << t2p5made << " / " << t2p5shots << " FG%: " << t2p5fg << endl;



	cout << "Team 1 Score: " << team1score << endl;
	cout << "Team 2 Score: " << team2score << endl;

	statsfile.close();
	system("pause");
	return 0;
}
