/*

This program demonstrates how we would overload the subscript operator...


class IntList
{
private:
    int m_list[10];
 
public:
    void setItem(int index, int value) { m_list[index] = value; }
    int getItem(int index) { return m_list[index]; }
};



int main()
{
    IntList list;
    list.setItem(2, 3);
 
    return 0;
}

Are we setting element 2 to the value 3, or element 3 to the value 2? Without seeing the definition of setItem(), it’s simply not clear.

You could also just return the entire list and use operator[] to access the element:




class IntList

{
private:
    int m_list[10];
 
public:
    int* getList() { return m_list; }
};


int main()
{
    IntList list;
    list.getList()[2] = 3;
 
    return 0;
}



*/




class IntList{

  public:

	int& operator[](const int index);
	const int& operator[] (const int index) const;

  private:

	int m_list[10];


};


int& IntList::operator [](const int index){
	return m_list[index];
}


/*

Now, whenever we use the subscript operator ([]) on an object of our class, the compiler will return the corresponding element from the m_list member variable! This allows us to both get and set values of m_list directly:


This is both easy syntactically and from a comprehension standpoint. When list[2] evaluates, the compiler first checks to see if there’s an overloaded operator[] function. If so, it passes the value inside the hard braces (in this case, 2) as an argument to the function.

*/

int main(){

	IntList list;				// How do we 
	list[3] =2;
	
	//const IntList clist;				// Of course this won't compile either because we have not initialized ...

	// clist[2] = 3;				// this will give us a compile error.


	return 0;

}



/*
Why operator[] returns a reference

Let’s take a closer look at how list[2] = 3 evaluates. Because the subscript operator has a higher precedence than the assignment operator, list[2] evaluates first. list[2] calls operator[], which we’ve defined to return a reference to list.m_list[2]. Because operator[] is returning a reference, it returns the actual list.m_list[2] array element. Our partially evaluated expression becomes list.m_list[2] = 3, which is a straightforward integer assignment.

In the lesson a first look at variables, you learned that any value on the left hand side of an assignment statement must be an l-value (which is a variable that has an actual memory address). Because the result of operator[] can be used on the left hand side of an assignment (e.g. list[2] = 3), the return value of operator[] must be an l-value. As it turns out, references are always l-values, because you can only take a reference of variables that have memory addresses. So by returning a reference, the compiler is satisfied that we are returning an l-value.

Consider what would happen if operator[] returned an integer by value instead of by reference. list[2] would call operator[], which would return the value of list.m_list[2]. For example, if m_list[2] had the value of 6, operator[] would return the value 6. list[2] = 3 would partially evaluate to 6 = 3, which makes no sense! If you try to do this, the C++ compiler will complain:

*/



