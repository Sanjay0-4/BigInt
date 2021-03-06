#include <vector>

#include "constructors/constructors.hpp"
#include "operators/io_stream.hpp"
#include "operators/relational.hpp"

#include "third_party/catch.hpp"


TEST_CASE("Relational operators", "[relational][operators]") {
    std::vector<BigInt> big_nums = {    // manually sorted vector of BigInts
        BigInt("-123456789012345678901234567890123456"),
        BigInt("-2134567890"),
        BigInt("-1324567890"),
        BigInt("-1234567890"),
        BigInt("-234567890"),
        BigInt("-134567890"),
        0,
        BigInt("134567890"),
        BigInt("234567890"),
        BigInt("1234567890"),
        BigInt("1324567890"),
        BigInt("2134567890"),
        BigInt("123456789012345678901234567890123456")
    };

    for (size_t i = 0; i < big_nums.size(); i++) {
        for (size_t j = 0; j < big_nums.size(); j++) {
            if (i == j)
                REQUIRE(big_nums[i] == big_nums[j]);
            if (i != j)
                REQUIRE(big_nums[i] != big_nums[j]);
            if (i < j)
                REQUIRE(big_nums[i] < big_nums[j]);
            if (i > j)
                REQUIRE(big_nums[i] > big_nums[j]);
            if (i <= j)
                REQUIRE(big_nums[i] <= big_nums[j]);
            if (i >= j)
                REQUIRE(big_nums[i] >= big_nums[j]);
        }
    }
}
