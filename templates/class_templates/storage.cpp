template <> // The following ia s a template class with no templated paramaters

class storage<bool>{ // We're specializing storage for bool
 private:

	unsinged char m_data;


  public: 
	storage() : m_data(0)
	{
	}
	

	void set(int index, bool value)
	{
		//Figure out which bit wer'e setting/unsettin
	}

}
