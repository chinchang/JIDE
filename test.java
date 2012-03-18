import java.net.*;

public class test{

public static void main (String[] args) {

try {
InetAddress address = InetAddress.getLocalHost( );
System.out.println(address);
}

catch (UnknownHostException e) {
System.out.println("Could not find this computer's address.");
}

}

}
