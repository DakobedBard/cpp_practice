template <class T>
class DynamicArray
{
private:
	T* m_array;
	int m_length;
 
public:
	DynamicArray(int length)
		: m_array(new T[length]), m_length(length)
	{
	}
 
	~DynamicArray()
	{
		delete[] m_array;
	}
 
	// Copy constructor
	DynamicArray(const DynamicArray &arr) = delete;
 
	// Copy assignment
	DynamicArray& operator=(const DynamicArray &arr) = delete;
 
	// Move constructor
	DynamicArray(DynamicArray &&arr)
		: m_length(arr.m_length), m_array(arr.m_array)
	{
		arr.m_length = 0;
		arr.m_array = nullptr;
	}
 
	// Move assignment
	DynamicArray& operator=(DynamicArray &&arr)
	{
		if (&arr == this)
			return *this;
 
		delete[] m_array;
 
		m_length = arr.m_length;
		m_array = arr.m_array;
		arr.m_length = 0;
		arr.m_array = nullptr;
 
		return *this;
	}
 
	int getLength() const { return m_length; }
	T& operator[](int index) { return m_array[index]; }
	const T& operator[](int index) const { return m_array[index]; }
 
};
