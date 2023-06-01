#include "pch.h"
#include <string>
#include <gtest/gtest.h>
#include <c:\users\my\source\repos\bestreview\BestReview\Account.cpp>

class AccountFixture : public testing::Test
{
public:
	Account acc{ 10000 };
};

TEST_F(AccountFixture, T1) {
	EXPECT_EQ(10000, acc.getBalance());
}

TEST_F(AccountFixture, T2) {
	acc.deposit(100);
	EXPECT_EQ(10100, acc.getBalance());
}

TEST_F(AccountFixture, T3) {
	acc.withdrawl(100);
	EXPECT_EQ(9900, acc.getBalance());
}
