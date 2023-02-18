TestMake: main.cpp
	g++ -o main main.cpp -lraylib && ./main && make clean

clean: 
	rm main
