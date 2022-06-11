
#include "GUI.h"

using namespace Graph_lib;

struct Lines_window : Graph_lib::Window {
	Lines_window(Point xy, int w, int h, const string& title );
	Open_polyline lines;
	Vector_ref<Rectangle> vr;
	Vector_ref<Rectangle> prev;

	bool wait_for_button();
	
	
	Button F_button;
	Button U_button;
	Button R_button;
	Button B_button;
	Button D_button;
	Button L_button;
	Button mix_button;
	Button reset_button;
	Button X_button;
	Button Y_button;
	Button Z_button;
	
	int x=0;
	int y=0;
	int z=0;

	
	void F();
	void R();
	void U();
	void B();
	void L();
	void D();
	void reset();
	void mix();
	void X();
	void Y();
	void Z();
	void ct();
	

	

};
