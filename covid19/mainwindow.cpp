#include "mainwindow.h"
#include "qtablewidget.h"
#include "ui_mainwindow.h"
#include<QFile>
#include <QKeyEvent>
#include<QCoreApplication>>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,m_ptrStuSql(nullptr)
{
    ui->setupUi(this);


    m_dlgLogin.show();
      //隐藏主窗口，只显示登录窗口
    auto f =[&](){
        this->show();
    };
    connect(&m_dlgLogin,&log_in::sendLoginSuccess,this, f);  //登录成功自动跳到主界面
    //菜单栏
    ui->treeWidget->clear();

    ui->treeWidget->setColumnCount(1);
    QStringList l;
    l<<"核酸信息管理系统";
    QTreeWidgetItem *pf=new QTreeWidgetItem(ui->treeWidget,l);
     ui->treeWidget->addTopLevelItem(pf) ; //设置表名称

     l.clear();
     l<<"学生管理";
     QTreeWidgetItem *p2=new QTreeWidgetItem(pf,l);







    l.clear();
    l<<"管理员管理";
    QTreeWidgetItem *p4=new QTreeWidgetItem(ui->treeWidget,l);


    pf->addChild(p2);

    pf->addChild(p4);
    ui->treeWidget->expandAll();
    ui->stackedWidget->setCurrentWidget(0);

    m_ptrStuSql=stuSql::getinstance();
    m_ptrStuSql->init();  //需要初始化才能打开数据库
   m_lNames<< "买骊英";
   m_lNames<< "呼延冰";
   m_lNames<< "明燕舞";
   m_lNames<< "朋宁";
   m_lNames<< "靳寄蓉";
   m_lNames<< "希又琴";
   m_lNames<< "郯宜年";
   m_lNames<< "红白夏";
   m_lNames<< "安芸若";
   m_lNames<< "汉亦竹";
   m_lNames<< "纳明俊";
   m_lNames<< "师夏山";
   m_lNames<< "郁美曼";
   m_lNames<< "依觅云";
   m_lNames<< "闾丘容";
   m_lNames<< "周赫";
   m_lNames<< "崔慧心";
   m_lNames<< "脱凝荷";
   m_lNames<< "戚文茵";
   m_lNames<< "祖韶仪";
   m_lNames<< "邹韵宁";
   m_lNames<< "溥元芹";
   m_lNames<< "休寒梦";
   m_lNames<< "尧强";
   m_lNames<< "六琴音";
   m_lNames<< "竭问筠";
   m_lNames<< "励怿";
   m_lNames<< "钱骊美";
   m_lNames<< "锐乐池";
   m_lNames<< "悉古兰";
   m_lNames<< "衣蝶梦";
   m_lNames<< "奉雪卉";
   m_lNames<< "万俟柳";
   m_lNames<< "所霞赩";
   m_lNames<< "瞿济";
   m_lNames<< "藤星渊";
   m_lNames<< "巫马雅";
   m_lNames<< "那拉凡";
   m_lNames<< "公飞兰";
   m_lNames<< "侍雁荷";
   m_lNames<< "进和顺";
   m_lNames<< "酒温文";
   m_lNames<< "仝醉山";
   m_lNames<< "迟芳洲";
   m_lNames<< "台沛山";
   m_lNames<< "淡彭湃";
   m_lNames<< "硕乐安";
   m_lNames<< "睢晓星";
   m_lNames<< "蓟军";
   m_lNames<< "揭衍";
   m_lNames<< "禾古韵";
   m_lNames<< "屈初夏";
   m_lNames<< "尉迟寄";
   m_lNames<< "佴鸣";
   m_lNames<< "风侬";
   m_lNames<< "钊婉淑";
   m_lNames<< "万建木";
   m_lNames<< "鲜于妙";
   m_lNames<< "甘红豆";
   m_lNames<< "旁凌春";
   m_lNames<< "皇甫冰";
   m_lNames<< "亓官凌";
   m_lNames<< "穆睿范";
   m_lNames<< "求惜寒";
   m_lNames<< "家晓蕾";
   m_lNames<< "督思菱";
   m_lNames<< "伍若薇";
   m_lNames<< "简问玉";
   m_lNames<< "欧阳家";
   m_lNames<< "不香春";
   m_lNames<< "鞠思迪";
   m_lNames<< "长婉奕";
   m_lNames<< "通纶";
   m_lNames<< "乙昆锐";
   m_lNames<< "游梦凡";
   m_lNames<< "澄夏瑶";
   m_lNames<< "房依霜";
   m_lNames<< "井运发";
   m_lNames<< "闻亦凝";
   m_lNames<< "成安怡";
   m_lNames<< "锺离靖";
   m_lNames<< "衅幼旋";
   m_lNames<< "公羊和";
   m_lNames<< "麴问儿";
   m_lNames<< "青鸿晖";
   m_lNames<< "何淑雅";
   m_lNames<< "念代柔";
   m_lNames<< "杨自怡";
   m_lNames<< "刁清逸";
   m_lNames<< "库群";
   m_lNames<< "真甫";
   m_lNames<< "芮姮娥";
   m_lNames<< "素蔼";
   m_lNames<< "乔卓逸";
   m_lNames<< "荀海白";
   m_lNames<< "衷霞";
   m_lNames<< "多紫云";
   m_lNames<< "贺涵蓄";
   m_lNames<< "铎晓灵";
   m_lNames<< "隐元冬";
   m_lNames<< "任高歌";
   m_lNames<< "绍绿柳";
   m_lNames<< "蔚雅柔";
   m_lNames<< "东郭绿";
   m_lNames<< "卷亦绿";
   m_lNames<< "受健柏";
   m_lNames<< "昌如";
   m_lNames<< "司寇和";
   m_lNames<< "蓝施";
   m_lNames<< "岑昕昕";
   m_lNames<< "板靖易";
   m_lNames<< "宜昶";
   m_lNames<< "夕静云";
   m_lNames<< "仆令梅";
   m_lNames<< "能可可";
   m_lNames<< "烟惜玉";
   m_lNames<< "西门北";
   m_lNames<< "穰皎洁";
   m_lNames<< "商婉容";
   m_lNames<< "宿运诚";
   m_lNames<< "贲友瑶";
   m_lNames<< "盘晶灵";
   m_lNames<< "江韵诗";
   m_lNames<< "邸伟博";
   m_lNames<< "戢弘盛";
   m_lNames<< "聊嘉澍";
   m_lNames<< "滕文";
   m_lNames<< "貊惜珊";
   m_lNames<< "弥林";
   m_lNames<< "端惜雪";
   m_lNames<< "蒲运晟";
   m_lNames<< "仉雁蓉";
   m_lNames<< "濯彬";
   m_lNames<< "哀笛";
   m_lNames<< "柔理";
   m_lNames<< "邴明知";
   m_lNames<< "郝宛白";
   m_lNames<< "益心水";
   m_lNames<< "示夏青";
   m_lNames<< "斛俊雄";
   m_lNames<< "实梦泽";
   m_lNames<< "贝菀";
   m_lNames<< "完颜若";
   m_lNames<< "户雅惠";
   m_lNames<< "虞高超";
   m_lNames<< "箕小萍";
   m_lNames<< "布成济";
   m_lNames<< "俟妙音";
   m_lNames<< "务新荣";
   m_lNames<< "夙星阑";
   m_lNames<< "缪俊逸";
   m_lNames<< "石雨柏";
   m_lNames<< "权泰鸿";
   m_lNames<< "蒉访风";
   m_lNames<< "束荃";
   m_lNames<< "阙飞宇";
   m_lNames<< "建亦旋";
   m_lNames<< "广白秋";
   m_lNames<< "遇淑静";
   m_lNames<< "伏芸芸";
   m_lNames<< "偶春晓";
   m_lNames<< "融津";
   m_lNames<< "骑映安";
   m_lNames<< "温华采";
   m_lNames<< "旷海女";
   m_lNames<< "翟傲丝";
   m_lNames<< "隽秋珊";
   m_lNames<< "酆滢";
   m_lNames<< "紫鸿祯";
   m_lNames<< "韦晓蕾";
   m_lNames<< "惠晶滢";
   m_lNames<< "节卿";
   m_lNames<< "印友梅";
   m_lNames<< "鲁远";
   m_lNames<< "乐正书";
   m_lNames<< "富兴修";
   m_lNames<< "撒元洲";
   m_lNames<< "苏傲安";
   m_lNames<< "松嘉珍";
   m_lNames<< "诗云淡";
   m_lNames<< "贰曼云";
   m_lNames<< "边西华";
   m_lNames<< "花向山";
   m_lNames<< "夔开畅";
   m_lNames<< "吴微月";

   m_lNames<< "终谷蕊";
   m_lNames<< "山伟祺";
   m_lNames<< "蚁素昕";
   m_lNames<< "留葛菲";
   m_lNames<< "士囡囡";
   m_lNames<< "战傲云";
   m_lNames<< "说凌兰";
   m_lNames<< "鲜新苗";
   m_lNames<< "施阳晖";
   m_lNames<< "答宏义";
   m_lNames<< "包尔蓝";
   m_lNames<< "褚水晶";
   m_lNames<< "性蒙";
   m_lNames<< "公西献";
   m_lNames<< "东门载";
   m_lNames<< "朱海亦";
   m_lNames<< "孝鹏云";
   m_lNames<< "系秋白";
   m_lNames<< "将赞怡";
   m_lNames<< "汲春英";
   m_lNames<< "白兴庆";
   m_lNames<< "农惜萍";

   m_lNames<< "谌兰芳";
   m_lNames<< "逯英毅";
   m_lNames<< "邓馨欣";
   m_lNames<< "太史伟";
   m_lNames<< "翁志国";
   m_lNames<< "栋舒畅";
   m_lNames<< "植鸿轩";
   m_lNames<< "耿莹华";
   m_lNames<< "虢孤云";
   m_lNames<< "但清晖";
   m_lNames<< "佼黛";
   m_lNames<< "称梓洁";
   m_lNames<< "毓诗";
   m_lNames<< "树高爽";
   m_lNames<< "矫清漪";
   m_lNames<< "毋山雁";
   m_lNames<< "频孤阳";
   m_lNames<< "诸葛幻";
   m_lNames<< "钟离绮";
   m_lNames<< "藩以";
   m_lNames<< "闽添";
   m_lNames<< "后玮";
   m_lNames<< "邵嘉歆";
   m_lNames<< "爱若菱";
   m_lNames<< "廖冷";
   m_lNames<< "姓秀艳";
   m_lNames<< "壬飞光";
   m_lNames<< "功新语";
   m_lNames<< "金鸣晨";
   m_lNames<< "瑞宛亦";
   m_lNames<< "司睿好";
   m_lNames<< "霜嘉宝";
   m_lNames<< "亢向文";
   m_lNames<< "军烨煜";
   m_lNames<< "尹贤惠";
   m_lNames<< "弭承基";
   m_lNames<< "琴欣然";
   m_lNames<< "牧锦程";
   m_lNames<< "宗韫素";
   m_lNames<< "逮艳芳";
   m_lNames<< "贯问芙";
   m_lNames<< "星丹红";
   m_lNames<< "聂鹏飞";
   m_lNames<< "柏初柳";
   m_lNames<< "藏凌寒";
   m_lNames<< "董远骞";
   m_lNames<< "陶宏逸";
   m_lNames<< "苑冬";
   m_lNames<< "僪鹤梦";
   m_lNames<< "璩雅香";
   m_lNames<< "茹春燕";
   m_lNames<< "路峰";
   m_lNames<< "左丘荣";
   m_lNames<< "回齐敏";
   m_lNames<< "潭诗珊";
   m_lNames<< "果雁菱";
   m_lNames<< "况嘉美";
   m_lNames<< "普娟丽";
   m_lNames<< "湛清涵";
   m_lNames<< "茆华奥";
   m_lNames<< "高向薇";
   m_lNames<< "琦听安";
   m_lNames<< "少霁芸";
   m_lNames<< "墨兴生";
   m_lNames<< "左晋鹏";
   m_lNames<< "水梓馨";
   m_lNames<< "上官哲";
   m_lNames<< "麦藏";
   m_lNames<< "尚醉巧";
   m_lNames<< "位骞魁";
   m_lNames<< "后亭";
   m_lNames<< "谢吉月";
   m_lNames<< "其妮娜";
   m_lNames<< "咸晨潍";
   m_lNames<< "表秋白";
   m_lNames<< "舒文虹";
   m_lNames<< "令狐睿";
   m_lNames<< "宫痴瑶";
   m_lNames<< "宰陶宜";
   m_lNames<< "由水蓝";
   m_lNames<< "佛端雅";
   m_lNames<< "衡婉君";
   m_lNames<< "厉小枫";
   m_lNames<< "镇虹雨";
   m_lNames<< "扈娟娟";
   m_lNames<< "贵展";
   m_lNames<< "羿暎";
   m_lNames<< "蒙永怡";
   m_lNames<< "宇金";
   m_lNames<< "似慧美";
   m_lNames<< "零甘雨";
   m_lNames<< "抄正青";
   m_lNames<< "门雨灵";
   m_lNames<< "凭敬";
   m_lNames<< "罕娅";
   m_lNames<< "剧傲旋";
   m_lNames<< "厍依美";
   m_lNames<< "祁妍晨";
   m_lNames<< "崇沙羽";
   m_lNames<< "次君昊";
   m_lNames<< "却山晴";
   m_lNames<< "桂皓";
   m_lNames<< "贸仙韵";
   m_lNames<< "忻子琪";
   m_lNames<< "召妙";
   m_lNames<< "幸鸿才";
   m_lNames<< "鹿浩阔";
   m_lNames<< "寿靖荷";
   m_lNames<< "大诗桃";
   m_lNames<< "驹英发";
   m_lNames<< "鱼囡";
   m_lNames<< "钦昕珏";
   m_lNames<< "吕晓凡";
   m_lNames<< "永慕山";
   m_lNames<< "葛驰文";
   m_lNames<< "义钰";
   m_lNames<< "兆古";
   m_lNames<< "友驰婷";
   m_lNames<< "晁半芹";
   m_lNames<< "史元忠";
   m_lNames<< "豆痴旋";
   m_lNames<< "都凝思";
   m_lNames<< "景骊雪";
   m_lNames<< "禹静和";
   m_lNames<< "马佳香";
   m_lNames<< "闳鸿风";
   m_lNames<< "冒易蓉";
   m_lNames<< "陆听露";
   m_lNames<< "汤思柔";
   m_lNames<< "宋文彦";
   m_lNames<< "皋秀敏";
   m_lNames<< "苌闲静";
   m_lNames<< "占小夏";
    updateTable();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_F6){

        QFile f;
        auto str=QCoreApplication::applicationDirPath(); //获取位置
        f.setFileName(str+"//"+"stuqss.css");
        f.open(QIODevice::ReadOnly);
        QString strQss =f.readAll();

        this->setStyleSheet(strQss);
         m_dlgLogin.setStyleSheet(strQss);


    }
}


void MainWindow::on_pushButton_clicked()
{
    exit(0);
}


void MainWindow::on_btn_simulation_clicked()
{
    //制作学生数据

    for(int i=0;i<m_lNames.size();i++){
        StuInfo info;
        info.name=m_lNames[i];
        if(i%2){
            info.college=QString("Computer science");
            info.studentid=10000+i/3;
             info.domitory=QString("5A");
             info.date="5-05";
             info.phone=110;
        }
        else if(i%3){
             info.college=QString("Medical");
             info.studentid=10000+i/2;
             info.domitory=QString("学九");
             info.date="5-04";
             info.phone=119;
        }
        else if(i%5){
            info.college=QString("Finance");
             info.studentid=10000+i/5;
             info.domitory=QString("5B");
             info.date="5-03";
              info.phone=120;
        }
        else{
             info.college=QString("electric");
              info.studentid=10000+i/7;
              info.domitory=QString("5C");
              info.date="5-01";
               info.phone=144;
        }

        m_ptrStuSql->addStu(info);
    }
}


void MainWindow::on_btn_add_clicked()
{
    m_dlgAddStu.exec();
    updateTable();
}


void MainWindow::on_btn_clear_clicked()
{
    m_ptrStuSql->clearStuTable();
     updateTable();  //刷新
}

void MainWindow::updateTable()  //刷新数据表，重写表头
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(7);  //需要先设置有多少列
    QStringList l;
    l<<"序号"<<"学院"<<"学号"<<"姓名"<<"宿舍"<<"核酸日期"<<"电话";   
    ui->tableWidget->setHorizontalHeaderLabels(l);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    //ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection); //只选中单行
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);  //不可修改
    auto cnt=m_ptrStuSql->getStuCnt();
    qDebug()<<cnt;
    ui->lable_4->setText(QString("学生数量：%1").arg(cnt));
    QList<StuInfo> lStudents=m_ptrStuSql->getPageStu(0,cnt);

    ui->tableWidget->setRowCount(cnt);
    for(int i=0;i<lStudents.size();i++)
    {
         ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(i)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::number(lStudents[i].id)));
       ui->tableWidget->setItem(i,2,new QTableWidgetItem(lStudents[i].college));
          ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(lStudents[i].studentid)));
           ui->tableWidget->setItem(i,4,new QTableWidgetItem(lStudents[i].name));
           ui->tableWidget->setItem(i,5,new QTableWidgetItem(lStudents[i].domitory));
           ui->tableWidget->setItem(i,6,new QTableWidgetItem(lStudents[i].date));
           ui->tableWidget->setItem(i,7,new QTableWidgetItem(QString::number(lStudents[i].phone)));

    }

}


void MainWindow::on_btn_del_clicked()
{
    int i=ui->tableWidget->currentRow();
    if(i>=0){
        int id=ui->tableWidget->item(i,1)->text().toUInt();
        m_ptrStuSql->delStu(id);
        updateTable();
         QMessageBox::information(nullptr,"提示","删除成功");
    }

}


