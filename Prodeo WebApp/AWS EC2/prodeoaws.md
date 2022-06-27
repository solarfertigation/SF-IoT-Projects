# AWS EC2 Keys & SSH Commands
> Prodeo - AWS Elastic Beanstalk
- AWS Endpoint (ec2-54-93-63-198.eu-central-1.compute.amazonaws.com)

```
chmod 400 prodeo-ssh-keys.pem
```
```
ssh -i "prodeo-ssh-keys.pem" root/ec2-user@ec2-54-93-63-198.eu-central-1.compute.amazonaws.com
```

> Prodeo - AWS Linux Machine
- AWS Endpoint (ec2-3-67-139-185.eu-central-1.compute.amazonaws.com)

```
chmod 400 prodeo-ssh-keys.pem
```
```
ssh -i "prodeo-ssh-keys.pem" root/ec2-user@ec2-3-67-139-185.eu-central-1.compute.amazonaws.com
```

