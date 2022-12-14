cmake_minimum_required(VERSION 3.15) 


set(PROJECT_NAME Laba7test)			 		 
project("${PROJECT_NAME}")			 	


set(CMAKE_CXX_STANDARD 17)			 
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
			 

add_executable("${PROJECT_NAME}" Laba 6.cpp
				 CHITAT.hpp
			         VIVOD.hpp
			         KVADRAT.hpp
                 	         PROVERKA.hpp
			         MINIMUM.hpp
			         input.txt
				 ouput.txt)