cmake_minimum_required(VERSION 2.8)

ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    # Other flags
)



#set(maximum_product maximum_product.cpp  )
#add_executable(maximum_product ${maximum_product} )


set(knapsack knapsack.cpp  )
add_executable(knapsack ${knapsack} )


set(longest_common_subsequence longest_common_subsequence.cpp  )
add_executable(longest_common_subsequence ${longest_common_subsequence} )



