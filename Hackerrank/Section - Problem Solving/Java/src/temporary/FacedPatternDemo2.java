package temporary;

import java.util.Scanner;

public class FacedPatternDemo2 {
    public static void main(String[] args) {
        ShopKeeper shopKeeper = new ShopKeeper();
        System.out.print("Press 1 for Iphone\nPress 2 for Samsung\nPress 3 for BlackBerry\nEnter your choice:");
        Scanner scanner = new Scanner(System.in);
        int brandSelection = scanner.nextInt();
        switch (brandSelection) {
            case 1:
                shopKeeper.iPhoneSale();
                break;
            case 2:
                shopKeeper.samsungSale();
                break;
            case 3:
                shopKeeper.blackBerrySale();
                break;
            default:
                System.out.println("Not available in Stock");
        }
    }
}

interface MobileShop {
    void modelNo();
    void price();
}

class Iphone implements MobileShop {
    @Override
    public void modelNo() {
        System.out.println("Apple iPhone SE ");
    }

    @Override
    public void price() {
        System.out.println("৳36,990");
    }
}

class Samsung implements MobileShop {
    @Override
    public void modelNo() {
        System.out.println("Samsung Galaxy S20 Ultra 5G");
    }

    @Override
    public void price() {
        System.out.println("৳112,500.00");
    }
}

class BlackBerry implements MobileShop {
    @Override
    public void modelNo() {
        System.out.println("BlackBerry KEY2 LE");
    }

    @Override
    public void price() {
        System.out.println("৳35,000");
    }
}

class ShopKeeper {
    private Iphone iphone;
    private Samsung samsung;
    private BlackBerry blackBerry;

    public ShopKeeper() {
        iphone = new Iphone();
        samsung = new Samsung();
        blackBerry = new BlackBerry();
    }

    public void iPhoneSale() {
        iphone.modelNo();
        iphone.price();
    }

    public void samsungSale() {
        samsung.modelNo();
        samsung.price();
    }

    public void blackBerrySale() {
        blackBerry.modelNo();
        blackBerry.price();
    }
}
