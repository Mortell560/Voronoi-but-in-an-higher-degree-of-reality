#pragma once
#include <iostream>
#include <vector>

namespace fl {

	template <class T>
	class Queue {
	public:
		Queue() {};

		bool IsEmpty() {
			if (!queue.size()) {
				return true;
			}
			return false;
		}

		void enqueue(T elmt) {
			queue.push_back(elmt);
		};

		T dequeue() {
			if (this->IsEmpty()) {
				std::cout << "Ah yes, dequeue the nullref. Try again maybe" << std::endl;
				exit(-1);
			}
			T elmt = queue.front();
			queue.erase(queue.begin());
			return elmt;
		}

		size_t size() {
			return queue.size();
		}

		void display() {
			for (T var : queue)
			{
				std::cout << var << " ";
			}
			std::cout << "\n";
		}

	private:
		std::vector<T> queue {};
	};


}