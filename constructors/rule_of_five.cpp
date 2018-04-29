/*

Rule of Five.. 

Write a copy constructor, move constructor, copy assignment operator, move assignment operator



class DirectorySearchResult {
public:
  	DirectorySearchResult(
    		std::vector<std::string> const& files,
  		size_t attributes,
   	 	SearchQuery const* query)
   	 	: files(files),
      		attributes(attributes),
      		query(new SearchQuery(*query))
  		{ }

  	~DirectorySearchResult() { delete query; }

private:
  	std::vector<std::string> files;
  	size_t attributes;
  	SearchQuery* query;
};



*/



class DirectorySearchResult {
  public:
  	DirectorySearchResult(
    		std::vector<std::string> const& files,
  		size_t attributes,
   	 	SearchQuery const* query)
   	 	: files(files),
      		attributes(attributes),
      		query(new SearchQuery(*query))
  		{ }

  	~DirectorySearchResult() { delete query; }

  private:
  	std::vector<std::string> files;
  	size_t attributes;
  	SearchQuery* query;
};








int main(){


}
