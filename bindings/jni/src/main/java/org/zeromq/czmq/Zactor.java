/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
package org.zeromq.czmq;

public class Zactor implements AutoCloseable{
    static {
        try {
            System.loadLibrary ("czmqjni");
        }
        catch (Exception e) {
            System.exit (-1);
        }
    }
    long self;
    /*
    Create a new actor passing arbitrary arguments reference.
    */
    native static long __new (long task, long args);
    public Zactor (long task, long args) {
        /*  TODO: if __new fails, self is null...  */
        self = __new (task, args);
    }
    public Zactor () {
        self = 0;
    }
    /*
    Destroy an actor.
    */
    native static void __destroy (long self);
    @Override
    public void close () {
        __destroy (self);
        self = 0;
    }
    /*
    Send a zmsg message to the actor, take ownership of the message
    and destroy when it has been sent.                             
    */
    native static int __send (long self, long msgP);
    public int send (long self, long msgP) {
        return __send (self, msgP);
    }
    /*
    Receive a zmsg message from the actor. Returns NULL if the actor 
    was interrupted before the message could be received, or if there
    was a timeout on the actor.                                      
    */
    native static long __recv (long self);
    public long recv (long self) {
        return __recv (self);
    }
    /*
    Probe the supplied object, and report if it looks like a zactor_t.
    */
    native static boolean __is (long self);
    public boolean is (long self) {
        return __is (self);
    }
    /*
    Probe the supplied reference. If it looks like a zactor_t instance,
    return the underlying libzmq actor handle; else if it looks like   
    a libzmq actor handle, return the supplied value.                  
    */
    native static long __resolve (long self);
    public long resolve (long self) {
        return __resolve (self);
    }
    /*
    Return the actor's zsock handle. Use this when you absolutely need
    to work with the zsock instance rather than the actor.            
    */
    native static long __sock (long self);
    public long sock (long self) {
        return __sock (self);
    }
    /*
    Self test of this class.
    */
    native static void __test (boolean verbose);
    public void test (boolean verbose) {
        __test (verbose);
    }
}
