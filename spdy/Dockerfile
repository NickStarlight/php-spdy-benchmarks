FROM php:8.1-apache
COPY --from=composer:latest /usr/bin/composer /usr/local/bin/composer
COPY --from=spiralscout/roadrunner:2.10.4 /usr/bin/rr /usr/local/bin/rr

RUN apt-get update && apt-get install -y apache2-utils git zip
RUN docker-php-ext-install sockets

COPY config/php.ini $PHP_INI_DIR
COPY src/ /src

WORKDIR /src
RUN composer install --no-ansi --no-dev --no-interaction --no-plugins --no-progress --no-scripts --optimize-autoloader

EXPOSE 80

ENTRYPOINT ["nohup", "rr", "serve"]