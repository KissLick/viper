import sys
import os.path
import unittest

myinfo = {
  'name': "Viper Test Suite",
  'author': "theY4Kman",
  'description': "Tests the Viper standard library",
  'version': "1.0"
}

'''Tests the core functions and data necessary to start the other tests'''
class TestCoreFunctions(unittest.TestCase):
  def testsourcemodmodule(self):
    '''"sourcemod" module exists'''
    self.failUnless(__import__('sourcemod'), 'sourcemod module not found')
  
  def testsyspath(self):
    '''sys.path contains path to this plug-in'''
    self.assertEqual(sys.path[0], os.path.dirname(__file__),
        'plug-in path not found in sys.path')


# Creates a new test suite consisting of the tests in TestCoreFunctions
viper_suite = unittest.TestLoader().loadTestsFromTestCase(TestCoreFunctions)

# Load all test modules
for mod in ['testentity','testhalflife', 'testforwards', 'testconsole']:
  viper_suite.addTest(unittest.TestLoader().loadTestsFromName(mod))

unittest.TextTestRunner(verbosity=2).run(viper_suite)
