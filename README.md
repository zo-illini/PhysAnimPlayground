# PhysAnimPlayground

关于物理动画的一些研究与实现

# 载具乘客物理动画

点击进入关卡

![企业微信截图_16275399393482](https://user-images.githubusercontent.com/22382526/127443599-443b18be-702b-424a-8a87-86b0069d6c8c.png)

开始驾驶，e键切换无物理效果的对比假人的显示，鼠标滚轮调整物理动画的混合系数

![企业微信截图_16275401783053](https://user-images.githubusercontent.com/22382526/127443624-e4e8ca27-eecf-4790-a16a-cbee4623ffed.png)

注： ue4原生的物理系统中，如果将骨骼网格体的不同骨骼分别设置为“运动学”与“模拟物理”，再将网格体使用物理方式带动（例如载具movementcomponent），
则运动学骨骼与模拟骨骼之间的位移会有一帧的偏差。
这是由于底层PhysX引擎的时序问题导致的。

![image](https://user-images.githubusercontent.com/22382526/127444155-6d5fc34f-2567-4953-899e-9d440abbc827.png)

采用了基于速度预测的方法解决了上述分离问题，逻辑在MySkeletalMeshComponent类中。

![企业微信截图_16275407561250](https://user-images.githubusercontent.com/22382526/127443875-839eeb99-4204-4301-b80d-e3ed1e1556a3.png)


# 受击物理动画

点击进入关卡

![企业微信截图_16274418044727](https://user-images.githubusercontent.com/22382526/127444411-085a5c65-f03f-4be9-b129-f4ee04517895.png)


点击假人，触发受击的物理动画

![企业微信截图_1627539921178](https://user-images.githubusercontent.com/22382526/127444487-840cb13f-64c3-439e-bb3d-00fbc506ff73.png)


点击假人，触发击飞的物理动画，注意角色与墙面的碰撞处理。

![企业微信截图_162753989339](https://user-images.githubusercontent.com/22382526/127444531-34021dbb-8dcc-432c-901a-6db6611fb2f8.png)
