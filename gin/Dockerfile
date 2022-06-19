FROM golang:1.18

RUN apt-get update && apt-get install -y apache2-utils

COPY /src /src
WORKDIR /src
RUN go mod download && go mod verify

RUN go build

EXPOSE 80

CMD ["./go-benchmark"]