# Setup Angular Env on AWS Server 
> Install NodeJS
```
curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/v0.34.0/install.sh | bash
. ~/.nvm/nvm.sh
nvm install --lts
```

> Install GIT
```
sudo yum install git -y
```

> Install Angular
```
npm install -g @angular/cli
```

> Install Nginx
```
sudo amazon-linux-extras install nginx1
```
> Install Certbot-Nginx
```
sudo yum update
sudo yum install https://dl.fedoraproject.org/pub/epel/epel-release-latest-7.noarch.rpm
sudo yum-config-manager --enable epel
sudo yum install certbot python3-certbot-nginx
```

> Install Certs SSL/TLS
```
sudo certbot --nginx -d example.com -d www.example.com
```

