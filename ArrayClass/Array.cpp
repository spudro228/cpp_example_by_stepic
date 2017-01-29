

#include <cstddef>

template <typename T>
class Array
{
	public:

	explicit Array(size_t size = 0, const T& value = T()):_size(size),_data(new T[size]){
		
		for (size_t i = 0; i < _size ; i++)
		{
			_data[i] = value;
		}
		
	}
	
	Array(const Array &array){
		_size = array._size;
		_data = new T[_size];
		
		for (size_t i = 0; i < _size; i++)
		{
			_data[i] = array._data[i];
		}
	}
	
	//оператор присваивания
	Array& operator=(const Array &array){
		if (this != &array)
		{
			delete [] _data;
			_size = array._size;
			_data = new T[_size];
			for (size_t i = 0; i < _size; i++)
			{
				_data[i] = array._data[i];
			}
		}
		return *this;
		
	}
	~Array(){
		delete [] _data;
	}
	
	T& operator[](size_t i){
		return _data[i];
	}
	const T& operator [] (size_t i) const{
		return _data[i];
	}
	
	size_t size() const{
		return _size;
		}
		
	private:
		T* _data;
		size_t _size;
    // Список операций:
    //
    // explicit Array(size_t size = 0, const T& value = T())
    //   конструктор класса, который создает
    //   Array размера size, заполненный значениями
    //   value типа T. Считайте что у типа T есть
    //   конструктор, который можно вызвать без
    //   без параметров, либо он ему не нужен.
    //
    // Array(const Array &)
    //   конструктор копирования, который создает
    //   копию параметра. Считайте, что для типа
    //   T определен оператор присваивания.
    //
    // ~Array()
    //   деструктор, если он вам необходим.
    //
    // Array& operator=(...)
    //   оператор присваивания.
    //
    // size_t size() const
    //   возвращает размер массива (количество
    //                              элементов).
    //
    // T& operator[](size_t)
    // const T& operator[](size_t) const
    //   две версии оператора доступа по индексу.
};

