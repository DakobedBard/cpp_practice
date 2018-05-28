/*

We can overload typecast operators...


*/


class Cents
{
private:
    	int m_cents;
public:
    	Cents(int cents=0)
    	{
        	m_cents = cents;
    	}
 	// Here we have overloaded the int cast
	operator int() {
		return m_cents
	}


    	int getCents() { return m_cents; }
    	void setCents(int cents) { m_cents = cents; }
};



int main(){

}
