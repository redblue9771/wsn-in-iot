# WSN Web

这是一个学校**无线传感网**课程设计项目

## 开始

课程设计仅仅要求做出参数的显示界面，但是我寻思着能够做的更好，于是走上的部署到云的道路。使用最新的`VS Code`的**Remote-WSL**功能在**Windows**的**Linux**平台下开发

### 架构设计

（待添加……）

### 技术栈 & 依赖

* Node.js
* React.js
* Material-UI
* Golang
* Firebase - Cloud Firestore

### 如何开始

1. 在`TinyOS`平台构建起无线传感节点（略，参看手册说明）
2. 基站入网（由于没有无线通信模块，通过串口连接至电脑，由电脑的服务程序统一发往`Firebase`云）
3. 启动服务

服务程序位于`server`文件夹，目前只提供二进制文件，可执行 EXE 文件需要自行编译

```
./wsn-web
```

启动完成后，切换到根目录执行

```bash
yarn
yarn start
// 仅限于本地测试，部署请直接 yarn build，然后将根目录的 build 文件夹部署到服务器
```

4. 终端访问`https://wsn-web.redblue.now.sh`

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details