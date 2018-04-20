make
g++ -o bin/codegen src/mainDriver.cpp
bin/irgen $1 > temp.ir
bin/codegen temp.ir
g++ asmOut/result.s -no-pie
./a.out
rm a.out temp.ir