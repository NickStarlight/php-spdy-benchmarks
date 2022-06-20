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
Those are the round 1 results, as from 19-07-2022.

### Technical specification
| Provider | Digital Ocean                                           |
|----------|---------------------------------------------------------|
| Product  | CPU Optimized Droplet                                   |
| Image    | Docker Version 19.03.12OS Ubuntu 20.04 by Digital Ocean |
| RAM      | 8GB                                                     |
| CPU      | 4 Dedicated CPUs                                        |
| Region   | New York 1                                              |


### Results
|                                              | PHP 8.1 - Spdy                                                                                                                                        | C++ 17 - uWebsockets                                                                                                                                         | Go 1.18 - Gin                                                                                                                                                   | Python 3.9 - FastAPI                                                                                                                                           | NodeJS 16 - Fastify                                                                                                                                             |
|----------------------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Time taken for tests                         | 57.129 seconds                                                                                                                                        | 9.208 seconds                                                                                                                                                | 14.929 seconds                                                                                                                                                  | 90.420 seconds                                                                                                                                                 | 18.484 seconds                                                                                                                                                  |
| Complete requests                            | 100000                                                                                                                                                | 100000                                                                                                                                                       | 100000                                                                                                                                                          | 100000                                                                                                                                                         | 100000                                                                                                                                                          |
| Failed requests                              | 0                                                                                                                                                     | 0                                                                                                                                                            | 0                                                                                                                                                               | 0                                                                                                                                                              | 0                                                                                                                                                               |
| Requests per second (mean)                   | 1750.41                                                                                                                                               | 10859.95                                                                                                                                                     | 6698.22                                                                                                                                                         | 1105.94                                                                                                                                                        | 5410.07                                                                                                                                                         |
| Time per request (mean)                      | 57.129 [ms]                                                                                                                                           | 9.208 [ms]                                                                                                                                                   | 14.929 [ms]                                                                                                                                                     | 90.420 [ms]                                                                                                                                                    | 18.484 [ms]                                                                                                                                                     |
| Transfer rate                                | 241.02 [Kbytes/sec]                                                                                                                                   | 901.46 [Kbytes/sec]                                                                                                                                          | 974.64 [Kbytes/sec]                                                                                                                                             | 183.60 [Kbytes/sec]                                                                                                                                            | 887.59 [Kbytes/sec]                                                                                                                                             |
| Percentage of requests served in miliseconds | 50%     57 <br> 66%     58 <br>75%     59 <br>80%     60 <br>90%     61 <br>95%     63 <br>98%     65 <br>99%     66 <br>100%    82 (longest request) | 50%      9 <br> 66%     10 <br> 75%     11 <br> 80%     12 <br> 90%     13 <br> 95%     14 <br> 98%     16 <br> 99%     18 <br> 100%    77 (longest request) | 50%      14 <br> 66%      16 <br>75%      18 <br> 80%      19 <br>90%      22 <br>95%      25 <br>98%      28 <br>99%      30 <br>100%     68 (longest request) | 50%      88 <br> 66%      91 <br>75%      93 <br>80%      95 <br>90%     101 <br>95%     105 <br>98%     110 <br>99%     113 <br>100%    162 (longest request) | 50%      19 <br> 66%      20 <br> 75%      20 <br>80%      21 <br>90%      23 <br>95%      26 <br>98%      30 <br>99%      33 <br>100%     55 (longest request) |

## Usage

All images are published on the [Github Registry](https://github.com/NickStarlight?tab=packages&repo_name=php-spdy-benchmarks).

## Contributing

Contributions are welcome!
If you believe you can improve an image/source or wan'ts to add another contestant, open a pull request!

## License

This work is licensed under the [WTFPL](https://choosealicense.com/licenses/wtfpl/) license.
