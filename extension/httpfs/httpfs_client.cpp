#include "httpfs_client.hpp"
#include "http_state.hpp"

#include "httplib.hpp"

namespace duckdb {

class HTTPFSClient : public HTTPClient {
public:
	HTTPFSClient(HTTPFSParams &http_params, const string &proto_host_port) {
	}

	unique_ptr<HTTPResponse> Get(GetRequestInfo &info) override {
		return nullptr;
	}
	unique_ptr<HTTPResponse> Put(PutRequestInfo &info) override {
		return nullptr;
	}

	unique_ptr<HTTPResponse> Head(HeadRequestInfo &info) override {
		return nullptr;
	}

	unique_ptr<HTTPResponse> Delete(DeleteRequestInfo &info) override {
		return nullptr;
	}

	unique_ptr<HTTPResponse> Post(PostRequestInfo &info) override {
		return nullptr;
	}
};

unique_ptr<HTTPClient> HTTPFSUtil::InitializeClient(HTTPParams &http_params, const string &proto_host_port) {
	return nullptr;
}

unordered_map<string, string> HTTPFSUtil::ParseGetParameters(const string &text) {
	unordered_map<string, string> x;
	return x;
}

string HTTPFSUtil::GetName() const {
	return "HTTPFS";
}

} // namespace duckdb
