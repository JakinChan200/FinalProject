#ifndef MOVIECOMP_TEST_HPP
#define MOVIECOMP_TEST_HPP

#include "gtest/gtest.h"
#include "movieInfo.hpp"
#include "movie.hpp"
#include "movieCategory.hpp"
#include <iostream>

using namespace std;

TEST(movietest, testOutput_Info) {
    MovieInfo* movie1 = new Movie("tempName");
    cout << "Result" << endl;
    cout << movie1->output_Info() << endl;
    cout << "Expected" << endl;
    cout << "tempName" << endl;
}

TEST(movieCategorytest, testOutput_Info) {
    MovieInfo* movie1 = new Movie("movieNumOne");
    MovieInfo* movie2 = new Movie("movieNumTwo");
    MovieCategory* movieCat1 = new MovieCategory("movieCategoryThree");
    movieCat1->addMovie(movie1);
    movieCat1->addMovie(movie2);
    cout << "Result" << endl;
    cout << movieCat1->output_Info() << endl;
    cout << "Expected" << endl;
    cout << "Category: movieCategoryThree\nmovieNumOne\nmovieNumTwo\n" << endl;
}

#endif