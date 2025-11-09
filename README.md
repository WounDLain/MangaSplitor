# MangaSplitor/漫画大跨页分割器
This is a tool to split doubule page spread(is this the proper name?) in manga. 

这是一个用以分割漫画中的大跨页的小工具。

基于Qt，一种支持C++/Python的软件开发框架，代码小登解决图形化界面与图像的方案。

#### 引言/Intro

你是否遇到过类似的场景：当你沉浸在漫画阅读时，当你为了最佳体验而打开了双页模式，享受一次显示两页图片的现实还原派乐趣时，由于漫画源采取了用单张图片保存大跨页以保留图片完整性，于是下一页便猝不及防的跳出了排版错乱的大跨页，伴随着一脸懵懂的孤独单页，毫不留情的破坏了流畅的阅漫体验。

————这一切都来自于你所使用的漫画阅读器并没有为大跨页做特别的适配。

Have met such plot before: when you're indulged in manga, you're right happy and fun, yet all of a sudden, what is called double page spread which should be exhibited separately just appear with another page. Quite annoying, ey?

————And all these things is your manga reader to blame.

<img width="360" height="180" alt="827826ca2eee012114cf49e98cf82f23" src="https://github.com/user-attachments/assets/3ef402c5-5339-4b28-a194-6d160997a977" />


为了解决这个问题，由WounDLain独立自主研发的MangaSplitor堂堂登场！

利用MangaSplitor，你可以将一话漫画中的所有大跨页快速的分割为两张单页，只需要点点鼠标！

这样就能够在任何一款阅读器里完美的实现大跨页的阅读了！

To solve the prob, MangaSplitor is coming now! 

U R ABLE to split all of the *double page spread* pages into two parts within a few clicks!

And then you can perfectly enjoy it in any manga reader!

✝升天✝

✝Jesus Christ✝

---

#### 使用方法/Instruction

<img width="360" height="237" alt="image" src="https://github.com/user-attachments/assets/3b7dbde7-58c6-4df8-8590-88328494fbe4" />

只需要把需要分割的漫画所在的文件夹/文件夹中的文件直接输入/拖入其中，程序便可以对目录下的全部图片文件进行分割。

English is toooo hard.

#### 注意事项/Warning

由于程序并非智慧生命体，目前仅能够处理图片文件名为按阅读顺序排列的纯阿拉伯数字的情况，并且会在分割后将文件按顺序从1开始重命名为纯粹的阿拉伯数字。

最终结果类似图片所示，日期反映出哪些图片是由大跨页分割而来的。

And no one will ever read this, I can guess.

<img width="431" height="150" alt="image" src="https://github.com/user-attachments/assets/eb07e419-64ce-4fe9-9ce9-5468f4c2c503" />

由于阅读方向会改变大跨页分割后的两张图片应当重命名为较小的数字还是较大的数字，因此务必根据自己的阅读方向做出选择后再分割。

由于本人崎岖的代码水平，建议在分割前备份文件。

So I quit. Abandon. That's all.

---

#### 核心逻辑

在冥思苦想了几天之后，我发现了一个完美的函数，能够精确的判断一张图片是否属于大跨页————

<img width="1416" height="104" alt="image" src="https://github.com/user-attachments/assets/03659bf9-132c-4350-9361-44fe3c25baa5" />

写出来给自己都气笑了，也因此，本来想写代码文档的，终于被自己感人的智慧整放弃了。

沉淀之后画了个流程图，希望能得到高人指点（

<img width="400" height="400" alt="image" src="https://github.com/user-attachments/assets/db4fe734-9193-4efc-831c-141d204924f1" />

#### 展望

其实代码里还有些功能没实现，因为太懒了。

另一个原因是我也不知道到底还能加什么真正有用的功能。

