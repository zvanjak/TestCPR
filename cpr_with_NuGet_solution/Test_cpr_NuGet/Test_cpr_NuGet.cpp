// Test_cpr_NuGet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <cpr/cpr.h>

int main()
{
   cpr::Response r = cpr::Get(cpr::Url{ "https://api.github.com/repos/whoshuu/cpr/contributors" },
     cpr::Authentication{ "user", "pass", cpr::AuthMode::BASIC },
     cpr::Parameters{ {"anon", "true"}, {"key", "value"} });

   std::cout << "Status code: " << r.status_code << '\n';
   std::cout << "Header:\n";

   for (const std::pair<const std::basic_string<char>, std::basic_string<char>>& kv : r.header) {
     std::cout << '\t' << kv.first << ':' << kv.second << '\n';
   }
   std::cout << "Text: " << r.text << '\n';
}