FROM python:3.9

RUN apt-get update && apt-get install -y apache2-utils

COPY src/ /src

WORKDIR /src
RUN pip install --no-cache-dir --upgrade -r requirements.txt

EXPOSE 80

CMD ["uvicorn", "app.main:app", "--host", "0.0.0.0", "--port", "80", "--workers", "1"]
