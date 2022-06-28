# Rubik kockás applikáció
Itt található a Rubik-kockás applikáció a Prog2-main mappában. A program linuxon, ubuntu operációs rendszeren működik.
A program fő részét a kocka3.cpp tartalmazza.
Ahhoz, hogy le lehessen futtatni az fltk-t le kell tölteni a következő paranccsal: sudo apt-get install libfltk1.1-dev
Ezt követően a programot a következő paranccsal lehet lefuttatni: g++ kocka3.cpp Graph.cpp Window.cpp GUI.cpp -o kocka `fltk-config --ldflags --use-images`
Ezt követően ha lefordul a program a ./kocka parancsot kell használni.
Ezt az applikációt Magas szintű programozási nyelvek 2 tantárgyból kellett bemutatnom, amire 5-ös jegyet kaptam.
Ha valami miatt nem akarna működni, keressenek nyugodtan, vagy állásinterjún elmondhatom.
