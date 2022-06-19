"use strict";

const fastify = require("fastify")();

fastify.get("/", function (req, reply) {
  reply.send({ message: "Hello World!" });
});

fastify.listen({ port: 80, host: '0.0.0.0' });
