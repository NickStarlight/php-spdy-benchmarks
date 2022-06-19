# SPDY PHP BENCHMARKS

[![License: WTFPL](https://img.shields.io/badge/License-WTFPL-brightgreen.svg)](http://www.wtfpl.net/about/)

## About

This repository contains Docker images for some of the most used minimal API frameworks available in the market.
The goal is to provide reproducible scenarios to compare them against [Spdy](https://github.com/NickStarlight/php-spdy) in the most fair comparison feasible.

## Rules

1. Currently, each contestant *must*1 provide:
   1. A router implementation
   2. A route that returns a 'Hello World!' message in the JSON format.
2. Each contestant *must* have it's own isolated and production-optimized Docker image.
3. Each contestant *must* leverage every programming language/framework optimization avaiable to provide optimal results.
4. Each contestant *must* run in an isolated machine.
5. Each contestant *must* run benchmarks two times, one for warmup(NodeJS V8 and PHP JIT greatly require this) and a second for results.
6. Benchmark method can be flexible, but for this repository example, all benchmarks must be ran from inside the container and apply the following technique the using [Apache Benchmark tool](https://httpd.apache.org/docs/2.4/programs/ab.html):
   1. ab -n 100000 -c 100
      - 100K requests with a concurrency level of 100, without Keep-Alive connections
7. Single worker process per language/framework

## Results

Soon

## Usage

All images are published on the [Github Registry](https://github.com/NickStarlight?tab=packages&repo_name=php-spdy-benchmarks).

## Contributing

Contributions are welcome!
If you believe you can improve an image/source or wan'ts to add another contestant, open a pull request!

## License

This work is licensed under the [WTFPL](https://choosealicense.com/licenses/wtfpl/) license.
