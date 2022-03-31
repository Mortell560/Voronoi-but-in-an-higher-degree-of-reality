#include "Queue.hpp"
#include <iostream>

using namespace fl;

int main(int argc, char** argv)
{
	fl::Queue<int> q;
	q.enqueue(3);
	q.enqueue(3);
	q.enqueue(3);
	q.enqueue(3);
	q.enqueue(2);
	q.display();
	std::cout << q.size() << "\n";
	std::cout << q.dequeue() << "\n";
	q.display();
	return 0;
}