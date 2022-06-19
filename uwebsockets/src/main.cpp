#include "App.h"

int main()
{
    uWS::App()
        .get("/*", [](auto *res, auto * /*req*/)
             { res->end("{ \"message\": \"Hello World!\" }"); })
        .listen(80, [](auto *listen_socket)
                {
	    if (listen_socket) {
			std::cout << "Listening on port " << 80 << std::endl;
	    } })
        .run();

    std::cout << "Failed to listen on port 80" << std::endl;
}