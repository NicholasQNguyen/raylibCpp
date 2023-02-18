run: main.cpp
	g++ -o main main.cpp -lraylib && ./main && make clean -Wall

clean: 
	rm main
