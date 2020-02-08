#include <iostream>

class VectrorDouble {
public:
	typedef double* iterator;
	typedef const double* const_iterator;
	VectorDouble(int size);
	VectorDouble(const initializer_list<double> &list);
	~VectorDouble();
	int size() const {return _size;}
	double operator[] (int i) const;
	double& operator[] (int i);
	//ArrayDouble& operator= (const ArrayDouble &arr);
	iterator begin() {return _data;}
	iterator end() {return _data+_size;}
	void push_back(double el);
	void insert(double el, int i);
	void erase(VectorDouble::iterator)
private:
	int _size;
	int _capacity;
	double *_data;
};

int main() {
	
}