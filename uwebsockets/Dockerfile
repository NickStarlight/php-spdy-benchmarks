FROM ubuntu:20.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y apache2-utils cmake wget g++ build-essential
RUN wget https://github.com/conan-io/conan/releases/latest/download/conan-ubuntu-64.deb
RUN dpkg -i conan-ubuntu-64.deb

COPY . /app

WORKDIR /app

RUN conan install . --build missing
RUN cmake . -DCMAKE_EXPORT_COMPILE_COMMANDS=1

RUN make

ENTRYPOINT [ "./bin/spdy-c++-benchmarks" ]