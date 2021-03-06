typedef float Flt;
typedef float Vec[3];

struct Shape {
	float width, height;
	float radius;
	Vec center;
};

class Global {
public:
	double thyme;
	struct timespec fthymeStart, fthymeEnd;
	int xres, yres;
	int bgThingCount;
	float yBGVel[20];
	int xBGPos[20];
	float size[20];
//DECLARE SHAPE FOR IMAGE
	Shape ship;

	char keys[65536];
	Global();

};

class Bullet {
public:
	Vec pos;
	Vec vel;
	float color[3];
	struct timespec time;
public:
	Bullet();
};

class Ship {
	public:
		Vec dir;
		Vec pos;
		Vec vel;
		float angle;
		float color[3];
		float radius;
	public:
		Ship();
};


class State {

	public:
		struct timespec stateTimer;

	public:
		State()
		{
			clock_gettime(CLOCK_REALTIME, &stateTimer);
		}
};

class Game {
public:
	Ship ship;
	Gbola *gbhead;
	Salmonella *shead;
	Cholora *chead;
	Bullet *barr;
	State *w1, *c1, *w2, *c2, *w3, *c3, *w4, *c4, *w5, *c5, *go;
	int nGbola;
	int nSalmonella;
	int nCholora;
	int nbullets;
	struct timespec bulletTimer;
	struct timespec mouseThrustTimer;
	bool mouseThrustOn;
public:
	Game();
	~Game();
};
enum Gamestate {
	STARTMENU,
	WAVEMENU,
	CUT0,
	WAVE1,
	CUT1,
	WAVE2,
	CUT2,
	WAVE3,
	CUT3,
	WAVE4,
	CUT4,
	WAVE5,
	CUT5,
	GAMEOVER,
	GAMEOVERC
};
