# AWS EC2 Keys & SSH Commands
> Prodeo - AWS Linux Server
- AWS Endpoint: https;//ec2-3-72-249-23.eu-central-1.compute.amazonaws.com
- Pubblic IP: https://3.72.249.23

```
chmod 400 prodeo-ssh-keys.pem
```
```
ssh -i "prodeo-ssh-keys.pem" root/ec2-user@ec2-3-72-249-23.eu-central-1.compute.amazonaws.com
```

