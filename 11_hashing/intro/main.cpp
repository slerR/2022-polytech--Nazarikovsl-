#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "hash.h"

#include "doctest.h"

TEST_CASE("test") {
	CHECK_EQ(hash_function("this"), 3559070);
	CHECK_EQ(hash_function("hist"), 3202850);
	CHECK_EQ(hash_function("tshi"), 3569600);
	CHECK_EQ(hash_function("shit"), 3529280);
}
/*
#include <iostream>
#include <cstring>
#include "hash.h"
using namespace std;
int main() {
	const char* ex = "tshi";
	unsigned int c = Hash(ex);
	cout << "Hash of '*' is:" << c << endl;
	return 0;
}
this - 3559070
hist - 3202850
tshi - 3569600
shit - 3529280
/*/