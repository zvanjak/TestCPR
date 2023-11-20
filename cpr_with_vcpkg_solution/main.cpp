#include <iostream>
#include <string>
#include <cpr/cpr.h>

int main(int argc, char** argv) {
 // cpr::Response r = cpr::Get(cpr::Url{ "https://api.github.com/repos/whoshuu/cpr/contributors" },
 //   cpr::Authentication{ "user", "pass", cpr::AuthMode::BASIC },
 //   cpr::Parameters{ {"anon", "true"}, {"key", "value"} });

	//std::cout << "Status code: " << r.status_code << '\n';
 // std::cout << "Header:\n";

	//for (const std::pair<const std::basic_string<char>, std::basic_string<char>>& kv : r.header) {
 //   std::cout << '\t' << kv.first << ':' << kv.second << '\n';
 // }
 // std::cout << "Text: " << r.text << '\n';

  cpr::Response resp = cpr::Post(cpr::Url{ "http://localhost:8888/scan?filename=NODENAME.zp" },
																 cpr::Multipart{ {"filename", cpr::File{"NODENAME.zip"}} });
  std::cout << resp.text << std::endl;


  //cpr::Response r = cpr::Post(cpr::Url{ "http://www.httpbin.org/post" },
  //  cpr::Body{ "This is raw POST data" },
  //  cpr::Header{ {"Content-Type", "text/plain"} });
  //std::cout << r.text << std::endl;

  return 0;
}