#include<iostream>
#include<cstdlib>
#include<ctime>
#include<limits>
#include"team.h"


    class Game {
	int player;

   public:
	 Game();
	 int playersPerTeam;
	 int maxBalls;
	 int totalPlayers;
	 std::string players[11];
	 bool isFirstInnings;
	 Team teamA,teamB;
	 Team *battingTeam,*bowlingTeam;
	 Player *batsman,*bowler;

	 void welcome();
	 void showAllPlayers();
	 int takeIntegerInput();
	 void selectPlayers();
	 bool validateSelectedPlayer(int);
	 void showTeamPlayers();
	 void toss();
	 void tossChoice(Team);
	 void startFirstInnings();
	 void startSecondInnings();
	 void initializePlayers();
	 void playInnings();
	 void bat();
	 bool validateInningsScore();
	 void showGameScorecard();
	 void showMatchSummary();



};
