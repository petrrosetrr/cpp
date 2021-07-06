//
// Created by Jimmie Alease on 7/6/21.
//

#ifndef MODULE07_ARRAY_HPP
#define MODULE07_ARRAY_HPP

template<typename T>
class Array {
private:
	unsigned int length;
	T *array;
public:

	Array() : length(0), array(nullptr) {}

	explicit Array(unsigned int length) :length(length) {
		this->array = new T[this->length];
	}

	Array(const Array<T> & array) : length(0), array(nullptr) {
		*this = array;
	}

	Array<T> & operator=(const Array<T> & array) {
		if (this != &array) {
			this->length = array.length;
			delete[] this->array;
			this->array = new T[length];
			for (int i = 0; i < length; ++i) {
				this->array[i] = array[i];
			}
		}
		return *this;
	}

	T & operator[](unsigned int index) {
		if (index < length) {
			return array[index];
		}
		throw ArrayOutOfBoundsException();
	}

	virtual ~Array() {
		delete[] array;
	}

	unsigned int size() const {
		return length;
	}

	class ArrayOutOfBoundsException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "Array index out of bounds";
		}
	};
};

#endif //MODULE07_ARRAY_HPP
