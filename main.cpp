#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

bool bfs() {
    //TODO
}

bool dfs() {
    //TODO
}

int lcm(int n1, int n2) {
    int max = (n1 > n2) ? n1 : n2;

    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            return max;
        }
        else
            ++max;
    } while (true);
}

int gcd() {
    //TODO
}

int Dijkstra() {
    //TODO
}