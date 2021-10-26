hello : hello_world.cpp
	g++ -o hello hello_world.cpp
pi : pi_estimator.cpp
	g++ -o pi pi_estimator.cpp
clean :
	rm main *.cpp
