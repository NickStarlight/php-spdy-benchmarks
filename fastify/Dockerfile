FROM node:16.15.1

COPY src/ /src

WORKDIR /src
RUN npm install

EXPOSE 80

ENTRYPOINT ["node", "app.js"]