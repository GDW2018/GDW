GDW 项目简介:
=====================================

官网地址 http://gdw.top/

##### 钱包使用:


English : [wallet use tutorial](https://github.com/GoldenWorld2018/GDW/blob/master/gdw_project/API%20interface/gdw-docs%201.2.0%20documentation.pdf)


Chinese : [钱包使用教程](https://github.com/GoldenWorld2018/GDW/blob/master/gdw_project/API%20interface/gdw-docs%201.2.0%20documentation.pdf)


什么是GDW?
--------------
### 项目背景简介

GDW是一条基于DPOS共识机制的公有链。Golden World 基金会致力于创建一个黄金买卖自由、价值支撑稳定、可追溯的流通环境。

GDW垂直黄金领域，是首条链上锚定实物黄金资产的公有链，实现黄金的数字化、权证化。首条侧链发行1:1锚定实物黄金的加密权证GDC，链上作为稳定资产进行流通，线下支持随时兑换实物黄金。GDW区块链系统中将提供一个以锚定实物黄金为依托的稳定金融底层系统——GDC，同时GDW系统中的GDC区别于传统的纸黄金等，具有真实资产所有权价值，并为实物黄金充分释放了其流通属性，实现了黄金价值可数字化编程和高速流通，让黄金资产在区块链数字世界中作为基础的、有实际资产价值的数字通证（Token）广泛流通。

我们引入了智能合约机制，实现资产的可数字化编程。其中需要消耗的GAS燃料为GDW，用于实现对Golden World公链系统网络使用时的资源控制，对 GDC 转账、智能合约的运行和存储进行收取GAS费，从而实现对记账人的经济激励以及防止资源滥用。GDW可实现对Golden World公链系统网络的管理权。"

### 技术特点
###### 1.技术架构

![image](https://raw.githubusercontent.com/GoldenWorld2018/GDW/master/gdw_project/picture/1.png)

###### 2.数据层
数据层除了采用标准的区块链链式结构、Merkle 树、哈希函数、非对称加密、
椭圆算法、时间戳技术外，又引入了委员代表记录、动态优先计算、斐波拉契数列
计算、密码学签名证据等技术。数据层创新了区块创世交易的模型，同时根据记账
委员信用表现优先原则，采用了记账委员选举记录的快速查询方法。数据层中，在
普通 TXOut 中，引入交易类型，扩展并定义了各类扩展交易模型，既支持传统普通
交易，又支持各类复杂知产交易；在 CoinBase 交易中，引入了扩展处罚交易类型，
保证了系统运行的安全稳定。

###### 3.网络层
网络层采用 P2P 组网方式，P2P 网络通过广播发送数据。采用 DPoS 共识的风
险在于由于记账单位在每个记账周期之初即被确定，因此可能会造成有目的的针对
性的 IP 攻击。防止这种攻击的出现有多种方式，对于网络层来说需要每个节点通
知其他节点活跃状态。其他网络单元监控新区块的产生状态，一旦发生周期超时异
常，立刻有其他节点接替执行记账权力。这样会保证交易记账的有效性，同时能够
有效地规避有目的的攻击。

###### 4.共识层
共识层采用的是 DPoS 的选举方式，DPoS 的原理是对于长期记账的鼓励和对于
权益使用的平衡。贡献的指数是非线性的，为了鼓励长期记账，贡献平衡因子是动
态非线性的，记账周期越长，记账次数越多，再次记账的可能性也会变得更大。同
时为了保证其他记账节点的可能性，平衡长期的优势，贡献值是会产生自然衰退的。
共识协议的达成在于每个参与会议的人员，实际上是可以预期会议的结果。在
每次记账周期开始，全体与会人员发起重新投票，直到会议开始之前停止投票，进
行选举。由于选举的方式是公开、确定的，所以每轮选举的结果也是确定的。由于
不消耗算力用于计算区块难度，记账节点的计算任务变得很轻松。同时，由于竞争
是确定因素决定的，或者是长期记账，或者是投入巨大的资金来获取记账权利，所
以区块链的安全性得以保证。
区块创世交易可以准确标记记账委员的标记（ID 匿名,由于匿名制的名称在每
次选举之后都是变化的，即使是同一记账单元，每轮投票的 ID 都是不同的。匿名
方法可以保证记账 IP 不会受到 DDOS 的攻击。），从而确定记账单元的合法性。当
新的记账节点加入网络时，通过部分回滚区块的方式，可以知道自己所在的选举周
期内的记账委员，从而有效的验证交易的合法性。

###### 5.激励层
对于记账节点的奖励，通常的做法是直接获取资产收益（即获得币值奖励）。
这样做是直接有效的，但是直接的奖励并没有持续性。因此 GDW 激励记账节点除了
直接的资产收益奖励以外，还增加一个记账贡献奖励。而记账贡献奖励会成为再次
记账的一个权益基础。对于每次记账收益由两部分构成：

    （1） 直接的记账收益：根据货币总量 *年化收益率
    （2） 记账贡献收益（累计）：隐性收益，作为下次投票计算的基数记账贡献收益
    
会随着记账次数的累计不断增长。记账收益会作为一个节点参与竞选的重要竞争计
算指标。

###### 6.合约层
合约层主要是向应用层提供定向功能的范式。定向功能范式根据功能形态的不
同，区分为不同类型的功能范式形态。功能范式在约定之初则考虑后向扩展的可能
性，即足够的弹性。弹性设计可以通过确定性类型和功能型类型来确定。同时，负
载区间可作为扩展区域选项存在于范式的内部。

    （1） 确定性类型的交易范式，需要满足基本的交易要求，包括基础交易。基础交易支持 P2PSK、P2SH 交易和 P2PK 交易。确定性类型的交易范式，主要支持的对象是基础交易，因此是以交易本身的安全性为核心功能的。
    （2） 功能型类型的合约范式，需要满足功能传导的作用，因此除了代币的属性，还包括功能的传导属性。功能范式通常包含价值、类型和约规的约束。功能类型的交易范式可以通过确定地址固化合约。也可以通过功能合约的传导交易来转移合约内容，完成知产传递。由于功能范式的特殊作用，功能合约主体是不直接参与币值交易的，功能合约的执行需要代币的支持，因为功能合约的传递过程中需要支持交易手续费。
    （3） 功能合约范式的基本禁止多个功能范式不能联合使用作为交易的输入。 功能范式针对所需功能不同，进行检查及条件约束。具体规范会依据交易类型的不同，进行对应的交易检查。所有功能范式均可以转移成为普通交易。知产功能范式主要约束为投票、知产登记、知产授权分发等。
    （4）功能范式的弹性扩展范式考虑到商业活动的多样性，确定了一些基本的交易类型。功能范式本身提供了弹性扩展的结构设计。功能范式的扩展可以通过电子标签内部的类型扩展、交易属性扩展，也可以在转义/标注中进行扩展。需要说明的是，对于扩展方式，交易不做规约检查。

###### 7.应用层
应用层提供功能范式的 RPC 功能方便使用者通过功能范式的使用产生资产操
作。通过简单的接口功能完成功能范式的约定和使用。商业应用的开发者大部分情
况下不需要理解底层的实现逻辑和过程，只需要自定义功能范式的约规，即可实现
灵活、多样的商业应用需求。考虑到商业的灵活性，应用层除了基础的功能范式约
束外，并不对用户产生的约规进行干预。
应用层通过区块浏览器（BlockExplorer）可以查询交易的基本信息，交易的基
本信息描述中可以通过电子标签、交易类型、交易描述等来获取确权的信息。

###### 8.对比其他区块链

对比指标| 比特币 | 以太坊| GDWChain
---|---|---|---|
挖矿算法 | POW | POW| DPOS | 
出块共识 | 竞争出块| 竞争出块 |竞争出块 | 
出块周期 | 10分钟| 15秒左右 | 10秒 | 
孤块可能性 | 高 | 高 | 低 | 
能源浪费 | 高 | 高 | 低 | 
普通交易TPS | 7| 15 | 5000+ | 


Linux下编译
-------------------

Ubuntu下安装必要的依赖库

```
apt-get update
sudo apt-get install cmake git libboost-dev libboost-all-dev libncurses5-dev libreadline-dev autoconf
```

下载代码

```
git clone https://github.com/GoldenWorld2018/GDW.git --recursive
```

编译 openssl

```
cd /openssl/
./config
make -j4
sudo make install
```
> 如果执行./config时候提示./config: Permission denied 执行 chmod a+x ./config

编译 miniupnp

```
cd /miniupnp/miniupnpc
cmake .
make
```

编译 leveldb

```
cd /leveldb
chmod u+x build_detect_platform
make
```
> 如果执行make时提示./build_detect_platform: Permission denied 则需要执行 chmod a+x ./build_detect_platform

编译 fc

```
cd /fc
export OPENSSL_ROOT_DIR=OPENSSL的目录
cmake .
make
```

编译 gdw

```
cd /gdw
cmake .
make
```

License
-------

Hcash is released under the terms of the MIT license. To get more information please refer to  https://opensource.org/licenses/MIT.

GDW主链