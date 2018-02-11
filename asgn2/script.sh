touch a.out
g++ basicBlockImplementation.cpp
./a.out
rm a.out
touch result
gcc -o result result.s -no-pie
./result
rm result
